/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int isBST(TreeNode *A, int min, int max){
    if(A==NULL)
        return 1;
    if (A->val>min && A->val<max && isBST(A->left,min,A->val) && isBST(A->right,A->val,max) )
        return 1;
    return 0;
}
int Solution::isValidBST(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return isBST(A,INT_MIN,INT_MAX);
}

//GOOD AND EASY QSN, IDK WHY I DIDNT GET IT MYSELF :(
