/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

void change(TreeNode *A){
    if(A==NULL)
        return;
    TreeNode *temp = A->left;
    A->left = A->right;
    A->right = temp;
    change(A->left);
    change(A->right);
}

TreeNode* Solution::invertTree(TreeNode* root) {

    TreeNode *A = root;
    change(A);
    return root;
}

//Ok in this qsn, Ive gone from root to leaves and in actual solution they go from leaves to root
//so next time i think of a solution, i need to think if it is possible to do from leaves and root and depending on which is easier I should do them
//next point is if I have to from leaves then first i need to travel all the way down to the leaves 
