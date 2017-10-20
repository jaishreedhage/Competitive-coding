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
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode *cur = root;
        vector<int>v;
        while(cur){
            if(cur->left==NULL){
                v.push_back(cur->val);
                cur = cur->right;
            }
            else{
                TreeNode *prev = cur->left;
                while(prev->right!=NULL && prev->right!=cur){
                    prev = prev->right;
                }
                if(prev->right==NULL){
                    prev->right = cur;
                    cur = cur->left;
                }
                else{
                    prev->right = NULL;
                    v.push_back(cur->val);
                    cur = cur->right;
                }
            }
        }
        return v;
    }
};
//awesome method for traversal with O(1) space
