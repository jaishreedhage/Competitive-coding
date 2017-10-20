/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void preorder(vector<int> &v,TreeNode *A){
    if(A==NULL)
        return;
    v.push_back(A->val);
    preorder(v,A->left);
    preorder(v,A->right);
}
vector<int> Solution::preorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    preorder(v,A);
    return v;
}


//above was recursive approach
//below is the iterative approach

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::preorderTraversal(TreeNode* A) {
    
    vector<int> v;
    stack<TreeNode *> s;
    TreeNode *root = A;
    while(root || !s.empty()){
        if(root==NULL && !s.empty()){
            root = s.top()->right;
            s.pop();
        }
        else if(root==NULL && s.empty())
            return v;
        else{
            v.push_back(root->val);
            s.push(root);
            root = root->left;
        }
    }
    return v;
}
