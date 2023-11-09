/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool getPath(TreeNode* root, vector<TreeNode*>&arr, TreeNode* x){
        if(!root){
            return false;
        }
        arr.push_back(root);

        if(root==x){
            return true;
        }

        if(getPath(root->left, arr, x)||getPath(root->right, arr, x)){
            return true;
        }
        arr.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>pathP, pathQ;
        getPath(root, pathP, p);
        getPath(root, pathQ, q);
        
        TreeNode* lca=NULL;
        int n=min(pathP.size(), pathQ.size());

        for(int i=0; i<n; i++){
            if(pathP[i]==pathQ[i]){
                lca=pathP[i];
            }
            else{
                break;
            }
        }
        return lca;
    }
};