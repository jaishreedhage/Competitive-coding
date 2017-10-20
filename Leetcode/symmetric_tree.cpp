/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool isSym(TreeNode *A, TreeNode *B){
    if((A==NULL && B!=NULL) || (A!=NULL && B==NULL))
        return false;
    if(A==NULL && B==NULL)
        return true;
    return(A->val==B->val && isSym(A->left,B->right)&&isSym(A->right,B->left));
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return isSym(root->left,root->right);
    }
};

//qsn is simple 
