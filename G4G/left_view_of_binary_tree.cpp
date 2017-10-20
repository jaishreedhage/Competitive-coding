/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// A wrapper over leftViewUtil()
void print(Node *root, int l, int &level){
    if(root==NULL)
        return;
    if(l>level){
        cout<<root->data<<" ";
        level = l;
    }
    print(root->left,l+1,level);
    print(root->right,l+1,level);
}
void leftView(Node *root)
{
   // Your code here
   if(root==NULL)
    return;
   int level = -1;
   print(root,0,level);
}
