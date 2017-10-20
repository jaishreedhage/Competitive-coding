/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int check(TreeNode *A,TreeNode *B){
    if(A==NULL && B==NULL)
        return 1;
    if((A!=NULL && B==NULL)||(A==NULL && B!=NULL))
        return 0;
    else{
        if(check(A->left,B->right) && check(A->right,B->left))
            return 1;
        else
            return 0;
    }
}
int Solution::isSymmetric(TreeNode* A) {

    if(A==NULL)
        return 1;
    int val = check(A->left,A->right);
    return val;
}

//same as identical_binary_trees.cpp
