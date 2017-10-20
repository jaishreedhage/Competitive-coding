/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */
// Convert a given tree to a tree where every node contains sum of values of
// nodes in left and right subtrees in the original tree
int sum(Node **node){
    if((*node)==NULL)
        return 0;
    if((*node)->left == NULL && (*node)->right==NULL){
        int t = (*node)->data;
        (*node)->data = 0;
        return t;
    }
    int t = (*node)->data;
    (*node)->data = sum(&((*node)->right)) + sum(&((*node)->left));
    return (*node)->data+t;
}

void toSumTree(Node *node)
{
    sum(&node);
    // Your code here
    // return node;

}

//qsn is good. i did it myself in 15mins
