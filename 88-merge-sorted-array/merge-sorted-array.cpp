class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int i= 0; //nums1
        int j= 0; //nums2
        while(i<m && j<n){
            if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i]==nums2[j]){
                ans.push_back(nums1[i]);
                ans.push_back(nums2[j]);
                i++;
                j++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
        while(i<m){ //agar i m tak nahi pahuncha ho (matlab nums1 me elements bache hain)
            ans.push_back(nums1[i]);
            i++;
        }
        while(j<n){ //agar j n tak nhi pahuncha ho (matlab nums2 me elements bache hain)
            ans.push_back(nums2[j]);
            j++;
        }
        for(int i= 0; i<m+n; i++){
            nums1[i]=ans[i];
        }
    }
};