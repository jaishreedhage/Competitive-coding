/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void add(TreeNode *A,int &sum,int number){
    if(A==NULL)
        return;
    if(A->left==NULL && A->right==NULL){
        number = number*10 + A->val;
        number = number % 1003;
        sum += number;
        return;
    }
    number = number*10 + A->val;
    number = number % 1003;
    add(A->left,sum,number);
    add(A->right,sum,number);

}
int Solution::sumNumbers(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int sum=0,number=0;
    add(A,sum,number);
    sum = sum%1003;
    return sum;
}

//easy qsn, took time coz of external disturbance 
