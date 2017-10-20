/*
Structure of the node of the binary tree is
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};
*/

void getme(struct Node *node, int target, int level, int &ans){
    if(node==NULL)
        return;
    if(node->data == target){
        ans = level;
        return;
    }
    getme(node->left,target,level+1,ans);
    getme(node->right,target,level+1,ans);
}
// function should return level of the target node
int getLevel(struct Node *node, int target)
{
	//code here
	int level = 1;
	int ans = 0;
	getme(node, target,level,ans);
	return ans;
}

//easy qsn
