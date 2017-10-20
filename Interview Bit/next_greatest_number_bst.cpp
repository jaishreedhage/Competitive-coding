/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* Solution::getSuccessor(TreeNode* A, int B) {

    TreeNode *t = A,*t1=NULL,*t2=NULL,*t3;
    while(t!=NULL){
        if(B>t->val){
            t1 = t;
            t = t->right;
        }
        else if(B==t->val)
            break;
        else{
            t1 = t;
            t = t->left;
        }
    }
    if(t==NULL)
        return NULL;
    if(t->right!=NULL){
        t3 = t->right;
        while(t3->left!=NULL){
            t3 = t3->left;
        }
        return t3;
    }
    else{
        if(t1!=NULL && t1->val>t->val)
            return t1;
        else{
            t2 = A;
            t3 = NULL;
            while(t2!=NULL){
                if(t2->val<B && t2->right!=NULL){
                    if(t2->right->val > B)
                        t3 = t2->right;
                    t2 = t2->right;
                }
                else if(t2->val == B)
                    break;
                else if(t2->left!=NULL){
                    if(t2->left->val > B)
                        t3 = t2->left;
                    t2 = t2->left;
                }
            }
            return t3;
        }
    }
}
//this qsn was basically to find inorder successor of a node
//there are 3 cases :
// first the node given doesnt exist in the tree at all
//second the right sub tree of the given node exists, so you traverse the left part of it and return the last left node
//third right subtree doesnt exist so you need to traverse from root uptil this node and find the one thats greater than the given node
