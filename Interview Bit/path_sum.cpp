/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int check(TreeNode *A,int B,int sum){
    if(A==NULL)
        return 0;
    else{
        if(A->left==NULL && A->right==NULL && (sum+A->val)==B){
           return 1;
        }
        else if(check(A->left,B,sum+A->val)==1 || check(A->right,B,sum+A->val)==1)
            return 1;
        else
            return 0;
    }
}

int Solution::hasPathSum(TreeNode* A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int val = check(A,B,0);
    return val;
}

//In trees the line 17 is used a lot in recursive functions!
