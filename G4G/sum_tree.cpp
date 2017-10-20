/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

bool isIt(Node *root, int &sum){
    if(root==NULL)
        return true;
    if(root->left==NULL && root->right==NULL){
        sum += root->data;
        return true;
    }
    int s1 = sum, s2 = sum;
    isIt(root->left,s1);
    isIt(root->right,s2);
    if(root->data == s1+s2){
        sum += root->data + s1+s2;
        return true;
    }
    return false;
}

// Should return true if tree is Sum Tree, else false
bool isSumTree(Node* root)
{
     // Your code here
    if(root==NULL)
        return true;
    int sum = 0;
    return isIt(root,sum);

}

//i did this qsn myself, but idk how i did it :O
