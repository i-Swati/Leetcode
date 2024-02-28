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
    int findBottomLeftValue(TreeNode* root) {
        if(root==NULL){
            return root->val;
        }

        deque<TreeNode*> queue;
        queue.push_back(root);
        int leftmost=root->val;

        while(!queue.empty()){
            int levelSize=queue.size();
            leftmost=queue.front()->val;

            for(int i=0; i<levelSize; i++){
                TreeNode* current=queue.front();
                queue.pop_front();

                if(current->left)
                    queue.push_back(current->left);
                if(current->right)
                    queue.push_back(current->right);
                
            }
        }
        return leftmost;
    }
};