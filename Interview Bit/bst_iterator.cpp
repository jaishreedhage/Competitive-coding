/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector <int> smallest;
int k;

void inorder(TreeNode *root,vector<int>&smallest){
    if(root==NULL)
        return;
    inorder(root->left,smallest);
    smallest.push_back(root->val);
    inorder(root->right,smallest);
}

BSTIterator::BSTIterator(TreeNode *root) {
    smallest.clear();
    k = smallest.size();
    inorder(root,smallest);
    k = smallest.size();
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(smallest.size()>0)
        return true;
    return false;
}

/** @return the next smallest number */
int BSTIterator::next() {
    if(hasNext()==true){
        int val = smallest[0];
        smallest.erase(smallest.begin());
        return val;
    }
    else{

    }
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */


//simple only. although here the space is O(number of nodes) and to make it O(height of the tree) we can do the inorder traversal thing as and wehn next() is called. Think on how this can be done
