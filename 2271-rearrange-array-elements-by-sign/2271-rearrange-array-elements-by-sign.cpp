class Solution {
public:
//BRUTE
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();

        vector<int>pos;
        vector<int>neg;

        for(int i=0; i<n; i++){
            if(arr[i]>0){
                pos.push_back(arr[i]);
            }
            else{
                neg.push_back(arr[i]);
            }
        }
        for(int i=0; i<n/2; i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        return arr;
    }
};