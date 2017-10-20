/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* A, TreeNode* B) {

    if(A==NULL && B==NULL)
        return 1;
    if(A==NULL && B!=NULL || A!=NULL && B==NULL || A->val!=B->val)
        return 0;
    else{
        if(isSameTree(A->left,B->left) && isSameTree(A->right,B->right))
            return 1;
        else
            return 0;
    }
}

//easy qsn. But i didnt know how to implement it in just this function. SO i did it myself so ya. So i have to do this qsn later to again get the idea of what is happening here.
