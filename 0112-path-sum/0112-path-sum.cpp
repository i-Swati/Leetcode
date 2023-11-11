/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
bool solve(TreeNode* root, int target, int sum){
    //base case1
    if(!root){
        return false;
    }

    sum=sum+root->val;
    //Base case2
    if(root->left==NULL && root->right==NULL){
        if(target==sum){
            return true;
        }
        else{
            return false;
        }
    }
    bool left=solve(root->left, target, sum);
    bool right=solve(root->right, target, sum);

    return left||right;
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        int sum=0;
        
        return solve(root, targetSum, sum);
    }
};