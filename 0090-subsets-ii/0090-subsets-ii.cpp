class Solution {
public:
//TC= O(2^n); SC= O(2^n)
void recur(vector<int>& nums, vector<int> currSub, set<vector<int>> &ans, int index){
    //base case
    if(index>=nums.size()){//we have reached the end of the array
        vector<int> temp= currSub;
        sort(temp.begin(), temp.end());
    
        ans.insert(temp); //subset found; include in array

        return;
    }

    //take
    currSub.push_back(nums[index]);

    recur(nums, currSub, ans, index+1);

    //not take
    //BACKTRACK
    currSub.pop_back();
    recur(nums, currSub, ans, index+1);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> currSub;

        set<vector<int>> ans;

        vector<vector<int>> result;

        recur(nums, currSub, ans, 0); //start rec from index 0
        for(auto i: ans){
            vector<int> temp;
            for(auto j: i){
                temp.push_back(j);
            }
            result.push_back(temp);
        }
        return result;
    }
};