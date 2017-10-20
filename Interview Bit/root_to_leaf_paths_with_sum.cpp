/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void check(TreeNode* root, int sum, vector<vector<int> > &v, vector<int> p){
    if(root == NULL)
        return;
    else if(root->left==NULL && root->right==NULL && sum-root->val==0){
        p.push_back(root->val);
        v.push_back(p);
    }
    else{
        p.push_back(root->val);
        sum -= root->val;
        check(root->left,sum,v,p);
        check(root->right,sum,v,p);
    }
}

vector<vector<int> > Solution::pathSum(TreeNode* root, int sum) {

    vector< vector<int> >v;
    vector<int>p;
    check(root,sum,v,p);
    return v;
}
//this qsn was easy only
