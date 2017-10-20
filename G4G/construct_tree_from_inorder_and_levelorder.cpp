/*Node is as follows:
struct Node
{
    int key;
    struct Node* left, *right;
};
*/
int search(int inorder[],int val,int l,int h){
    for(int i=l;i<=h;i++){
        if(inorder[i]==val)
            return i;
    }
    return -1;
}
int * extract(int inorder[],int levelOrder[],int l,int h,int n){
    int j=0,*ll = new int[h-l+1];
    for(int i=0;i<n;i++){
        int s = search(inorder,levelOrder[i],l,h);
        if(s!=-1)
            ll[j++] = levelOrder[i];
    }
    return ll;
}
Node* buildTree(int inorder[], int levelOrder[], int iStart, int iEnd,int n)
{
    //add code here.
    if(iStart>iEnd)
        return NULL;
    Node *root = new Node;
    root->key = levelOrder[0];
    if(iStart==iEnd)
        return root;
    int idx = search(inorder,levelOrder[0],iStart,iEnd);
    int *llevel = extract(inorder,levelOrder,iStart,idx-1,n);
    int *rlevel = extract(inorder,levelOrder,idx+1,iEnd,n);
    root->left = buildTree(inorder,llevel,iStart,idx-1,n);
    root->right = buildTree(inorder,rlevel,idx+1,iEnd,n);
    return root;
}
//important qsn
