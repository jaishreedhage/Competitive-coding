/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void levelorder(deque <int> v2, vector<vector<int> > &v, queue<TreeNode *> que){
    int count;
    int val;
    int order = 1;
    int junk = 0;
    vector<int> temp;
    while(que.size()>0){
        count=0;
        TreeNode *t = que.front();
        val = v2.front();
        val--;
        if(t->left!=NULL){
            que.push(t->left);
            count++;
            temp.push_back(t->left->val);
        }
        if(t->right!=NULL){
            que.push(t->right);
            count++;
            temp.push_back(t->right->val);
        }
        if(val==0){
            v2.pop_front();
            if(v2.size()<=0){
                v2.push_back(count);
            }
            else{
                int q = v2.back();
                v2.pop_back();
                v2.push_back(q+count);
            }
            if(order%2==1)
                reverse(temp.begin(),temp.end());
            if(temp.size()>0)
                v.push_back(temp);
            order++;
            temp.clear();
            junk = 1;
        }
        else if(val>0){
            v2.pop_front();
            v2.push_front(val);
            if(junk == 1){
                v2.push_back(count);
                junk =0;
            }
            else{
                int q = v2.back();
                v2.pop_back();
                v2.push_back(q+count);
            }

        }
        que.pop();
    }

}
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {

    vector<vector<int> >v;
    deque <int> v2;
    queue<TreeNode *> que;
    que.push(A);
    v2.push_back(1);
    vector<int> temp;
    temp.push_back(A->val);
    v.push_back(temp);
    levelorder(v2,v,que);
    return v;
}

//First of all I did this all by myself so Im very happy about it.
//Secondly I used queues coz i knew that for level order queue is used. But in this qsn had i used stacks, i wouldnt have the problem that ive faced mucb problems and code would be small
