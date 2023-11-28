class Solution {
public:
    bool solve(int i,vector<vector<int>>& graph, bool visited[],int color[]){
            visited[i]=true;
            for(auto itr:graph[i]){
// if uncolored color it with opposite color of its parent
                if(color[itr]==-1){
                    color[itr]=1-color[i];
                }
                else{
// if it is colored with same color as of parent return it is not bipartite
                    if(color[itr]!=1-color[i])
                        return false;
                }
// Traverse for all the unvisited adjacent nodes and check
                if(!visited[itr]){
// If any one node fails to satisfy return false
                    if(!solve(itr,graph,visited,color))
                        return false;
                }
            }
// If all node satisfies return true
            return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        int color[n];
// Initialize color with -1
        memset(color,-1,sizeof(color));
        bool visited[n];
// Initialize as unvisited
        memset(visited,false,sizeof(visited));
// Since nodes can be disconnected. It is possible that we are not able to reach all the nodes by starting from one node only. Thus check for all the nodes and if it is not visited process it.
        for(int i=0;i<n;i++){
            if(!visited[i]){
                color[i]=0;
                if(!solve(i,graph,visited,color))
                    return false;
            }
        }
        return true;
    }
};