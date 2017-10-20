/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorder(vector<int> &v,TreeNode *A){
    if(A==NULL)
        return;
    postorder(v,A->left);
    postorder(v,A->right);
    v.push_back(A->val);
}

vector<int> Solution::postorderTraversal(TreeNode* A) {

    vector<int> v;
    postorder(v,A);
    return v;
}

//above is recursive approach
//below is iterative approach

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> Solution::postorderTraversal(TreeNode* A) {
    
    vector<int> v;
    stack<TreeNode *> s;
    TreeNode *root = A;
    while(root!=NULL || !s.empty()){
        if(root==NULL && !s.empty()){
            root = s.top()->left;
            s.pop();
        }
        else if(root==NULL && s.empty())
            return v;
        else{
            v.push_back(root->val);
            s.push(root);
            root = root->right;
        }
    }
    reverse(v.begin(),v.end());
    return v;
}
