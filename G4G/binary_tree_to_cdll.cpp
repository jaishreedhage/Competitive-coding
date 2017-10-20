/*Complete the function below
Node is as follows:
struct Node
{
    struct Node *left, *right;
    int data;
};*/
Node *concat(Node *leftList, Node *rightList){
    if(leftList==NULL)
        return rightList;
    if(rightList==NULL)
        return leftList;

    Node *leftLast = leftList->left;
    Node *rightLast = rightList->left;

    leftLast->right = rightList;
    leftList->left = rightLast;
    rightList->left = leftLast;
    rightLast->right = leftList;
    return leftList;
}
Node *bTreeToCList(Node *root)
{
    //add code here.
    if(root==NULL)
        return root;
    Node *left = bTreeToCList(root->left);
    Node *right = bTreeToCList(root->right);

    root->left = root->right = root;

    return concat(concat(left,root),right);
}
//IMP QSN
