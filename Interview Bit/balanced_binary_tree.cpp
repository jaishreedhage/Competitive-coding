 /**
  * Definition for binary tree
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
  * };
  */
 int check(TreeNode *A, int *ht){
     if(A==NULL){
         *ht = 0;
         return 1;
     }
     int lh = 0 , rh = 0;
     int l = check(A->left, &lh);
     int r = check(A->right, &rh);

     *ht = max(lh,rh) + 1;

     if(abs(lh-rh)>1)
         return 0;

     return l&&r;
 }
 int Solution::isBalanced(TreeNode* A) {
     // Do not write main() function.
     // Do not read input, instead use the arguments to the function.
     // Do not print the output, instead return values as specified
     // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

     int ht = 0;
     return check(A,&ht);
 }

//above is the O(n) efficient solution, below is O(n^2)

int height(TreeNode *A){
    if(A==NULL)
        return 0;
    return 1 + max(height(A->left),height(A->right));
}
int Solution::isBalanced(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    if(A==NULL)
        return true;

    int lh = height(A->left);
    int rh = height(A->right);

    return (abs(lh-rh)<=1 && isBalanced(A->left) && isBalanced(A->right));
}
