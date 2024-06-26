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
    void inorder(TreeNode* root, vector<int>& arr){
        if(root==NULL)  return;

        inorder(root->left, arr);

        arr.push_back(root->val);

        inorder(root->right, arr);
    }

    TreeNode* createBST(int l, int r, vector<int>& arr){
        if(l>r) return NULL;

        int mid= l + ((r-l)/2);

        TreeNode* middle= new TreeNode(arr[mid]);

        middle->left= createBST(l, mid-1, arr); //left subtree

        middle->right= createBST(mid+1, r, arr); 

        return middle;

    }

    TreeNode* balanceBST(TreeNode* root) {
        vector<int> arr;
        inorder(root, arr);

        int l= 0;
        int r= arr.size()-1;

        return createBST(l, r, arr);
    }
};