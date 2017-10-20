/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::maxDepth(TreeNode* A) {

    if(A==NULL)
        return 0;
    return max(maxDepth(A->left)+1,maxDepth(A->right)+1);
}

//basic qsn.
//above is recursive approach, below is iterative

int Solution::maxDepth(TreeNode* A) {
    int l=0;
    if(A==NULL)
        return 0;
    queue<TreeNode *>q;
    q.push(A);
    int cur=0,prev=1,cnt=0;
    while(!q.empty()){
        TreeNode * temp = q.front();
        if(temp->left!=NULL){
            q.push(temp->left);
            cnt++;
        }
        if(temp->right!=NULL){
            q.push(temp->right);
            cnt++;
        }
        cur++;
        q.pop();
        if(cur==prev){
            prev = cnt;
            cur = 0;
            cnt = 0;
            l++;
        }
    }
    return l;
}
//basically using levelorder traversal
