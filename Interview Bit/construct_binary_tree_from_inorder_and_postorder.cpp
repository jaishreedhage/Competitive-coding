/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* createTree(vector<int> &inorder, vector<int> &postorder, int low, int high, int &p){
    if(high<low)
        return NULL;
    TreeNode *h = new TreeNode(postorder[p--]);
    vector<int>::iterator it;
    it = find(inorder.begin()+low,inorder.begin()+high,h->val);
    int pos = distance(inorder.begin(),it);
    h->right = createTree(inorder,postorder,pos+1,high,p);
    h->left = createTree(inorder,postorder,low,pos-1,p);
    return h;
}

TreeNode* Solution::buildTree(vector<int> &inorder, vector<int> &postorder) {

    int len = postorder.size()-1;
    TreeNode *head = createTree(inorder,postorder,0,inorder.size()-1,len);
    return head;
}

//VERY IMPORTANT QSN
