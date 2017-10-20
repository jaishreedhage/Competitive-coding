/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int inorder(vector<int> &v,TreeNode *A,int B){
    if(A==NULL)
        return 0;
    // cout<<A->val<<endl;

    int a = B - A->val;
    int l=0,h=v.size()-1;
    if(a>0){
        if(find(v.begin(),v.end(),a)!=v.end())
            return 1;
        v.push_back(A->val);
    }
    return inorder(v,A->left,B) || inorder(v,A->right,B);
}

int Solution::t2Sum(TreeNode* A, int B) {
    vector<int> v;
    int val = inorder(v,A,B);
    return val;
}

//easy qsn. used idea of hash to check if number exists :).
//the other soln that they have given is huge
