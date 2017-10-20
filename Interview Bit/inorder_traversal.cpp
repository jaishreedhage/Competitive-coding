/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(vector<int> &v,TreeNode *A){
    if(A==NULL)
        return;
    inorder(v,A->left);
    v.push_back(A->val);
    inorder(v,A->right);
}
vector<int> Solution::inorderTraversal(TreeNode* A) {
    vector<int> v;
    inorder(v,A);
    return v;
}

//the above was recursive approach.
//the below is the iterative approach

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::inorderTraversal(TreeNode* A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> v;
    stack<TreeNode *> s;
    TreeNode *root = A;
    while(root || !s.empty()){
        if(root==NULL && !s.empty()){
            v.push_back(s.top()->val);
            root = s.top()->right;
            s.pop();
        }
        else if(root==NULL && s.empty())
            return v;
        else{
            s.push(root);
            root = root->left;
        }
    }
    return v;
}
