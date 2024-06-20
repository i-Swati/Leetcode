class Solution {
public:
    bool dfs(int node, int col, vector<int> &colour, vector<vector<int>>& graph){
        colour[node]= col;
        for(auto &neigh: graph[node]){
            if(colour[neigh]==-1){
                if(dfs(neigh, !col, colour, graph)==false)   return false;;
            }
            else if(colour[neigh]==col){
                return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n= graph.size();
        
        vector<int> colour(n, -1);

        //for disconnected graphs

        for(int i= 0; i<n; i++){
            if(colour[i]==-1){
                if(dfs(i, 0, colour, graph)==false) return false;
            }
        }
        return true;
    }
};