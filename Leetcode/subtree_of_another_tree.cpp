/**
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }; */
bool check(TreeNode *T1, TreeNode *T2){
    if(T1==NULL && T2!=NULL)
        return false;
    if(T2==NULL && T1!=NULL)
        return false;
    if(T1==NULL && T2==NULL)
        return true;
    if(T1->val!=T2->val)
        return false;
    else{
        return (check(T1->left,T2->left) && check(T1->right,T2->right));
    }
}
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(s==NULL)
        	return false;
        if(t==NULL)
            return true;
		if(s->val==t->val && check(s,t))
            return true;
        return (isSubtree(s->left,t)|| isSubtree(s->right,t));
    }
};
//trick in this qsn if multiple nodes with same value of second tree ka root node if present, then you need to handle that
//soinstead of checking if subtree is mathcing only when thr second tree ka root node ka value is found
//using inorder and preorder traversal of both thr trees and checking if one of it is a substring in another (strstr())
//using of specail character in the traversal
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode *s,string &in){
    if(s==NULL){
        in+="$";
        return;
    }
    inorder(s->left,in);
    in+= to_string(s->val);
    inorder(s->right,in);
}
void preorder(TreeNode *s,string &pre){
    if(s==NULL){
        pre+="$";
        return;
    }
    pre+=to_string(s->val);
    preorder(s->left,pre);
    preorder(s->right,pre);
}
class Solution {
public:
    bool isSubtree(TreeNode* s, TreeNode* t) {
        string inS,inT;
        inorder(s,inS);
        inorder(t,inT);
        cout<<inS<<" "<<inT<<endl;
        if(inS.find(inT)==string::npos)
            return false;
        string preS,preT;
        preorder(s,preS);
        preorder(t,preT);
        cout<<preS<<" "<<preT<<endl;
        if(preS.find(preT)==string::npos)
            return false;
        else
            return true;
    }
};
//for strings you can use s1.find(s2)!=string::npos to check for existence of a substring match
