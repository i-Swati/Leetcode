class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        int n=arr.size();
        vector<int> result(n, 0); //we store the result here; 
        //array of size n and initially all n elements are 0
        stack<int> s; //we store the indices; to keep track of temperatures

        for(int i=0; i<n; i++){
            while(!s.empty() && arr[i]>arr[s.top()]){
                int idx=s.top();
                s.pop();
                result[idx]=i-idx;
            }
            s.push(i);
        }
        return result;
    }
};