class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        vector<int> result(n);
        stack<int> s;

        for(int i=0; i<n; i++){
            while(!s.empty() && arr[i]>arr[s.top()]){
                int index=s.top();
                s.pop();

                result[index]=i-index;
            }
            s.push(i);
        }
        return result;
    }
};