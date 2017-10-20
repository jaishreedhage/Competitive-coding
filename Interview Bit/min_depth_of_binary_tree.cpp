/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void depth(TreeNode *A,int &max,int count){
    if(A==NULL)
        return;
    if(A->left==NULL && A->right==NULL){
        count++;
        if(max>count)
            max = count;
        return;
    }
    count++;
    depth(A->left,max,count);
    depth(A->right,max,count);
}

int Solution::minDepth(TreeNode* A) {
    int max = INT_MAX;
    depth(A,max,0);
    return max;
}

//simple qsn
//but again i used another function call here, and in actual soln they did in just one function
//on understanding the one function waala properly
int minDepth(Node *node)
{
    //Your code here
    if(node==NULL)
        return 0;
    if(node->left==NULL && node->right==NULL)
        return 1;
    if(node->left==NULL)
        return minDepth(node->right)+1;
    if(node->right==NULL)
        return minDepth(node->left)+1;
    return min(minDepth(node->right),minDepth(node->left))+1;
}
//so basically same as maxDepth, except that the case 1
//                                                      \
//                                                       2
//if the second and third case isnt used, then for the above tree, ill get 1 as answer, when clearly answer is 2
