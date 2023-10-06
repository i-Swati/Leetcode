class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        vector<int>result;

        int elem1=0, elem2=0, cnt1=0, cnt2=0;

        for(int i=0; i<n; i++){
            if(arr[i]==elem1){
                cnt1++;
            }
            else if(arr[i]==elem2){
                cnt2++;
            }
            else if(cnt1==0){
                elem1=arr[i];
                cnt1=1;
            }
            else if(cnt2==0){
                elem2=arr[i];
                cnt2=1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt1=0;
        cnt2=0;

        for(int i=0; i<n; i++){
            if(arr[i]==elem1){
                cnt1++;
            }
            else if(arr[i]==elem2){
                cnt2++;
            }
        }

        if(cnt1>n/3){
            result.push_back(elem1);
        }
        if(cnt2>n/3){
            result.push_back(elem2);
        }
        return result;
    }
};