class Solution {
public:
    void dfs(int node, vector<int>& vis, vector<int> adj[]){
        vis[node]= 1;
        for(auto neighbour: adj[node]){
            if(vis[neighbour]==0){
                dfs(neighbour, vis, adj);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int v= isConnected.size();
        vector<int> adj[v];
        vector<int> vis(v, 0);

        for(int i=0;i<v;i++){            
            for(int j=0;j<v;j++){
                if(isConnected[i][j]==1 && i !=j){                    
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int cnt= 0;
        for(int i=0; i<v; i++){
            if(vis[i]==0){
                cnt++;
                dfs(i, vis, adj);
            }
        }
        return cnt;                              
    }
};