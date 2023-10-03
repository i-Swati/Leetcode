class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        int n=arr.size();
        vector<int>result;
        
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i]==arr[j]){
                    result.push_back(arr[i]);
                    result.push_back(arr[j]);
                         
                }
           
            }
        }
        int m=result.size();
        return m/2;
    }
};