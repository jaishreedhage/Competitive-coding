/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void traverse(TreeNode *A,map<int,int> &v,int hd){
    if(A==NULL)
        return;
    v[hd]+=(A->val);
    traverse(A->left,v,hd-1);
    traverse(A->right,v,hd+1);
}

vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    int hd = 0;
    map<int,int> v;
    traverse(A,v,hd);
    vector<int> vs;
    map<int,int>::iterator it;
    for(it=v.begin();it!=v.end();it++){
        vs.push_back(it->second);
    }
    return vs;
}

//in this vertical order traversal, care for whether the node on lower depth is being added or not isnt taken into consideration
//this has been taken care of in another qsn -> IB (vertical_order_traversal_of_binary_tree.cpp)
