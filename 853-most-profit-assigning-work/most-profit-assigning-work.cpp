class Solution {
public:
    int n;
    int check(int wor, vector<pair<int, int>> &vec){
        int pmax= 0;
        
        for(int i= 0; i<n; i++){
            if(wor>=vec[i].first){
                pmax = max(pmax, vec[i].second);
            }
        }
        return pmax;        
    }

    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        n= difficulty.size();

        vector<pair<int, int>> vec;
        for(int i= 0; i<n; i++){
            vec.push_back({difficulty[i], profit[i]});
        }
        sort(vec.begin(), vec.end());

        for (int i = 1; i < n; i++) { //profit array is not sorted
            vec[i].second = max(vec[i].second, vec[i - 1].second);
        }
       
        // Update the size of the vector
        n = vec.size();

        int ans= 0;
        for(int i= 0; i<worker.size(); i++){
            ans= ans + check(worker[i], vec);
        }
        return ans;
    }
};