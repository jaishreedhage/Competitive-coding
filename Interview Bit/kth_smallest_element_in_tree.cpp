/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode *root, vector<int> &v){
    if(root==NULL)
        return;
    inorder(root->left,v);
    v.push_back(root->val);
    inorder(root->right,v);
}
int Solution::kthsmallest(TreeNode* root, int k) {
    vector<int> v;
    inorder(root,v);
    return v[k-1];
}

//easy only. But here i have traversed the entire array. But in soln, they have minimised it to K which is good. So gonna see their solution now
// i didnt understand what they did, but i just changed my own code to do that

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void inorder(TreeNode *root, vector<int> &v,int k){
    if(root==NULL)
        return;
    inorder(root->left,v,k);
    v.push_back(root->val);
    if(v.size()>=k)
        return;
    inorder(root->right,v,k);
}
int Solution::kthsmallest(TreeNode* root, int k) {
    vector<int> v;
    inorder(root,v,k);
    return v[k-1];
}
