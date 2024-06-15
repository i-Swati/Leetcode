class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> vec;
        int n= profits.size();

        for(int i=0; i<n; i++){
            vec.push_back({capital[i], profits[i]});
        }

        sort(vec.begin(), vec.end());

        priority_queue<int> pq;

        int i=0;
        for(int j= 0; j<k; j++){
            while(i<n && w>=vec[i].first){
                pq.push(vec[i].second);
                i++;
            }

            if(pq.empty()){
                break;
            }

            w= w + pq.top();
            pq.pop();
        }

        return w;
    }
};