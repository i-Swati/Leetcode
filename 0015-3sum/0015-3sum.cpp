class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        //BETTER/OPTIMAL: O(n^2)
        int n=arr.size();
        sort(arr.begin(), arr.end());
        set<vector<int>>st;
        vector<vector<int>>result;

        for(int i=0; i<n-2; i++){
            int low=i+1;
            int high=n-1;
            while(low<high){
                if(arr[i]+arr[low]+arr[high]<0){
                    low++;
                }
                else if(arr[i]+arr[low]+arr[high]>0){
                    high--;
                }
                else{
                    st.insert({arr[i], arr[low], arr[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto it:st){
            result.push_back(it);
        }
        return result;
    }
};
