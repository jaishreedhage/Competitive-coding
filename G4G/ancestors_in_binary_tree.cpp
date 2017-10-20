/*
Structure of a node is as following
struct Node
{
     int data;
     struct Node* left;
     struct Node* right;
};
*/
void printanc(struct Node *root,int target, vector<int>v, vector<int> &v2){
    if(root==NULL)
        return;
    else if(root->data == target)
        v2 = v;
    v.push_back(root->data);
    printanc(root->left,target,v,v2);
    printanc(root->right,target,v,v2);
}

// Function should print all the ancestor of the target node
bool printAncestors(struct Node *root, int target)
{
    vector<int> v,v2;
    printanc(root,target,v,v2);
    if(v2.size()<=0){
        cout<<endl;
        return false;
    }
    reverse(v2.begin(),v2.end());
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    cout<<endl;
    return true;
}
// i dont like the way ive sent another vector to get the result from the findings
//actual soln is the one below, learn the line 48 and 49
bool printAncestors(struct node *root, int target)
{
  /* base cases */
  if (root == NULL)
     return false;

  if (root->data == target)
     return true;

  /* If target is present in either left or right subtree of this node,
     then print this node */
  if ( printAncestors(root->left, target) ||
       printAncestors(root->right, target) )
  {
    cout << root->data << " ";
    return true;
  }

  /* Else return false */
  return false;
}
