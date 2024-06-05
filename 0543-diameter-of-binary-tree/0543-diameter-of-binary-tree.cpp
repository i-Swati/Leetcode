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

    //intuition- we calculate lh of tree, rh of tree, then take the maxm of them
    //to calculate lh and rh, we create a height function and pass left and right respectively to find lh and rh

    int height(TreeNode* root){
        //base case

        if(root==NULL){
            return 0;
        }

        int lh= height(root->left);
        int rh= height(root->right);

        return max(lh, rh)+1;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        //base case

        if(root==NULL){
            return 0;
        }

        int ld= diameterOfBinaryTree(root->left);
        int rd= diameterOfBinaryTree(root->right);

        int d= height(root->left) + height(root->right);

        return max(d, max(ld, rd));
    }
};