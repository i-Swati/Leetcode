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

    //helper function to check if two subtrees are identical

    bool same(TreeNode* p, TreeNode* q){
        //base cases
        if(p==NULL && q==NULL){
            return true;
        }
        if(p==NULL || q==NULL){
            return false;
        }

        if(p->val!=q->val){
            return false;
        }

        return same(p->left, q->left) && same(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        //subtree is null; any subtree can match so true
        if(subRoot==NULL){
            return true;
        }
        //if root is NULL, that means there are no nodes left in the root tree so false
        if(root==NULL){
            return false;
        }

        //if the subtree rooted at the current node of root matches the subroot
        if(same(root, subRoot)){
            return true;
        }

        //recursive call to check if subRoot is a subtree of the left or right child of the current node

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);

    }
};