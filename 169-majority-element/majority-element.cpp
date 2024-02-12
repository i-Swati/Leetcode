class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
        int elem=arr[0];
        int cnt=1;

        for(int i=0; i<n; i++){
            if(elem==arr[i]){
                cnt++;                
            }
            else{
                cnt--;
                if (cnt==0) {
                    elem = arr[i];
                    cnt = 1;
                }
            }
        }
        return elem;
    }
};