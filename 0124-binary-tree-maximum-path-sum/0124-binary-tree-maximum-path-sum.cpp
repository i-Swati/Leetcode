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
    int calc(TreeNode* root, int &maxi){
        if(root==NULL){//base case
            return 0;
        }
        int leftsum=max(0, calc(root->left, maxi));
        int rightsum=max(0, calc(root->right, maxi));
        maxi=max(maxi, (leftsum+rightsum+root->val));

        return max(leftsum, rightsum)+root->val;

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;

        calc(root, maxi);
        return maxi;
    }
};