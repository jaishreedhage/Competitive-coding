/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* createTree(vector<int> &preorder, vector<int> &inorder, int low,int high,int &preIndex){
    if(high<low)
        return NULL;
    TreeNode *h = new TreeNode(preorder[preIndex++]);
    vector<int>::iterator it;
    it = find(inorder.begin()+low,inorder.end()+high,h->val);
    int pos = distance(inorder.begin(),it);
    h->left = createTree(preorder,inorder,low,pos-1,preIndex);
    h->right = createTree(preorder,inorder,pos+1,high,preIndex);
    return h;
}
TreeNode* Solution::buildTree(vector<int> &preorder, vector<int> &inorder) {

    int p = 0;
    TreeNode *head = createTree(preorder,inorder,0,preorder.size()-1,p);
    return head;
}

//VERY IMPORTANT QSN
