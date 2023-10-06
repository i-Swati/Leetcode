class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        //BETTER/OPTIMAL

        int n=arr.size();
        vector<int>result(n);
        int posInd=0;
        int negInd=1;

        for(int i=0; i<n; i++){
            if(arr[i]>0){
                result[posInd]=arr[i];
                posInd=posInd+2;
            }
            else{
                result[negInd]=arr[i];
                negInd=negInd+2;
            }
        }
        return result;
    }
};