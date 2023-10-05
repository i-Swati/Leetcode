class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int elem=0;
        int cnt=0;
        for(int i=0; i<arr.size();i++){
            if(cnt==0){
                cnt=1;
                elem=arr[i];
            }
            else if(arr[i]==elem){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return elem;
    }
};