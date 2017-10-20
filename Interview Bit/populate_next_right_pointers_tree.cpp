/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* A) {

    TreeLinkNode *root;
    deque<TreeLinkNode *>s;
    deque<int> ele;
    if(A==NULL)
        return;
    s.push_back(A);
    ele.push_back(1);
    int junk =0;
    while(!s.empty()){
        root = s.front();
        int c = 0;
        if(root->left!=NULL){
            s.push_back(root->left);
            c++;
        }
        if(root->right!=NULL){
            s.push_back(root->right);
            c++;
        }
        if(ele.front()==1){
            root->next = NULL;
            s.pop_front();
            ele.pop_front();
            if(ele.size()<=0){
                ele.push_back(c);
            }
            else{
                int q = ele.back();
                ele.pop_back();
                ele.push_back(q+c);
            }
            junk = 1;
        }
        else{
            s.pop_front();
            root->next=s.front();
            int q = ele.front();
            ele.pop_front();
            ele.push_front(q-1);
            if(junk==0){
                int q = ele.back();
                ele.pop_back();
                ele.push_back(q+c);
            }
            else{
                ele.push_back(c);
                junk = 0;
            }
        }
    }
}
//qsn is in similar lines with level order traversal
