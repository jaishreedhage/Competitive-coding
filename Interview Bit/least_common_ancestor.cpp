/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void check(vector<int>&v1,vector<int>&v2,vector<int>v3,TreeNode *A, int val1,int val2){
    if(A==NULL)
        return;
    if(A->val==val1 || A->val == val2){
        v3.push_back(A->val);
        if(A->val==val1){
            v1 = v3;
            check(v1,v2,v3,A->left,val1,val2);
            check(v1,v2,v3,A->right,val1,val2);
        }
        if(A->val==val2){
            v2 = v3;
            check(v1,v2,v3,A->left,val1,val2);
            check(v1,v2,v3,A->right,val1,val2);
        }
        return;
    }
    else{
        v3.push_back(A->val);
        check(v1,v2,v3,A->left,val1,val2);
        check(v1,v2,v3,A->right,val1,val2);
    }

}
int Solution::lca(TreeNode* A, int val1, int val2) {

    vector<int> v1,v2,v3;
    check(v1,v2,v3,A,val1,val2);
    int m = v1.size(), n =v2.size();
    int diff = m-n,i=v1.size()-1,j=v2.size()-1;
    if(diff>0){
        for(int k=0;k<diff;k++)
            i--;
    }
    else{
        for(int k=0;k<diff;k++)
            j--;
    }
    for(int k=i;k>=0;k--){
        if(v1[k]==v2[k])
            return v1[k];
    }
    return -1;
}

//in this i have first extracted the root to node and then checked if anything is same or not
//in the actual soln they have done it more easily by doing some recursive thing, basically their space complexity is less.
