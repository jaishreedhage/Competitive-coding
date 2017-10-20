/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::verticalOrderTraversal(TreeNode* A) {
    int hd = 0;
    map<int,vector<int> > mp;
    map<int,vector<int> > :: iterator it;
    vector<vector<int> >v;
    if(A==NULL)
        return v;
    queue<pair<TreeNode *,int> >q;
    q.push(make_pair(A,hd));
    while(!q.empty()){
        pair<TreeNode *,int> front = q.front();
        q.pop();
        mp[front.second].push_back(front.first->val);
        if(front.first->left!=NULL)
            q.push(make_pair(front.first->left,front.second-1));
        if(front.first->right!=NULL)
            q.push(make_pair(front.first->right,front.second+1));
    }
    for(it=mp.begin();it!=mp.end();it++)
        v.push_back(it->second);
    return v;
}

//so basically in this qsn, i had used inorder preorder traversal, so coz of that lower depth node of same horizontal distance wasnt before higher depth node
//so had to use level order for that
