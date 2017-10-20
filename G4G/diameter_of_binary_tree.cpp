/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

int height(Node *node){
    if(node == NULL)
        return 0;
    return 1+max(height(node->left),height(node->right));
}

/* Computes the diameter of binary tree with given root.  */
int diameter(Node* node)
{
    if(node==NULL)
        return 0;
   // Your code here
   int lh = height(node->left);
   int rh = height(node->right);
   
   return max((lh+rh+1),max( diameter(node->left), diameter(node->right) ) );
}

//computing diameter of tree -> V.IMP QSN
