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
    int height(TreeNode* root){ //a function to calculate height of tree

        //base case
        if(root==NULL){
            return 0;
        }
        //height of left subtree for the node
        int lh=height(root->left);
        //height of right subtree for the node
        int rh=height(root->right);

        return max(lh, rh)+1; //+1 for the current node;

    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        int leftDia=diameterOfBinaryTree(root->left);
        int rightDia=diameterOfBinaryTree(root->right);

        int dia=height(root->left)+height(root->right);

        return max(dia, max(leftDia, rightDia));
    }
};