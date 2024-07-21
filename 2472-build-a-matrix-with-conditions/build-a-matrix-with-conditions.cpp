class Solution {
public:
    vector<vector<int>> buildMatrix(int k, vector<vector<int>>& rowConditions, vector<vector<int>>& colConditions) {
        vector<vector<int>> matrix(k, vector<int>(k, 0));
        
        vector<int> rowOrder = topologicalSort(k, rowConditions);
        vector<int> colOrder = topologicalSort(k, colConditions);
        
        if (rowOrder.empty() || colOrder.empty()) {
            return {}; // return empty matrix if there is a cycle in any of the graphs
        }
        
        unordered_map<int, int> rowPos, colPos;
        for (int i = 0; i < k; ++i) {
            rowPos[rowOrder[i]] = i;
            colPos[colOrder[i]] = i;
        }
        
        for (int i = 1; i <= k; ++i) {
            matrix[rowPos[i]][colPos[i]] = i;
        }
        
        return matrix;
    }
    
private:
    vector<int> topologicalSort(int k, vector<vector<int>>& conditions) {
        vector<int> inDegree(k + 1, 0);
        unordered_map<int, unordered_set<int>> graph;
        
        for (const auto& cond : conditions) {
            int u = cond[0];
            int v = cond[1];
            if (graph[u].insert(v).second) {
                ++inDegree[v];
            }
        }
        
        queue<int> q;
        for (int i = 1; i <= k; ++i) {
            if (inDegree[i] == 0) {
                q.push(i);
            }
        }
        
        vector<int> order;
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            order.push_back(node);
            for (int neighbor : graph[node]) {
                if (--inDegree[neighbor] == 0) {
                    q.push(neighbor);
                }
            }
        }
        
        return order.size() == k ? order : vector<int>();
    }
};