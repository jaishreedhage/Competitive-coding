/*  Structure of a Binary Tree
struct Node
{
    int data;
    Node* left, *right;
}; */
void check(Node*root, deque<Node *> stack, int &max){
    int count = 0, prev = 1, b=0;
    if(prev>max)
        max = prev;
    while(stack.size()>0){
        b++;
        Node *temp = stack.front();
        stack.pop_front();
        if(temp->left!=NULL){
            stack.push_back(temp->left);
            count++;
        }
        if(temp->right!=NULL){
            stack.push_back(temp->right);
            count++;
        }
        if(b==prev){
            if(count>max)
                max = count;
            prev = count;
            count = 0;
            b=0;
        }
    }
}

/* Function to get the maximum width of a binary tree*/
int getMaxWidth(Node* root)
{
   // Your code here
   deque<Node *> stack;
   if(root==NULL)
    return 0;
   stack.push_back(root);
   int max = 0;
   check(root,stack,max);
   return max;
}

//basic level order only. Just that this time i implemented a better level order traversal
