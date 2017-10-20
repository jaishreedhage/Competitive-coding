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
    vector<int> postorderTraversal(TreeNode* root) {
        TreeNode *cur = root;
        vector<int>v;
        while(cur){
            if(cur->right==NULL){
                v.push_back(cur->val);
                cur = cur->left;
            }
            else{
                TreeNode *prev = cur->right;
                while(prev->left!=NULL && prev->left!=cur){
                    prev = prev->left;
                }
                if(prev->left==NULL){
                    prev->left = cur;
                    v.push_back(cur->val);
                    cur = cur->right;
                }
                else{
                    prev->left = NULL;
                    //v.push_back(cur->val);
                    cur = cur->left;
                }
            }
        }
        reverse(v.begin(),v.end());
        return v;
    }
};
