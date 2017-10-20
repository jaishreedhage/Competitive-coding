/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* createBST(const vector<int> &A,int l,int h){
    if(h<l)
        return NULL;
    int mid = l+(h-l)/2;
    TreeNode* head = new TreeNode(A[mid]);
    head->left = createBST(A,l,mid-1);
    head->right = createBST(A,mid+1,h);
    return head;
}

TreeNode* Solution::sortedArrayToBST(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode* head = NULL;
    head = createBST(A,0,A.size()-1);
    return head;
}

//VERY GOOD QSN!!! I like the way the func createBST is implemented
