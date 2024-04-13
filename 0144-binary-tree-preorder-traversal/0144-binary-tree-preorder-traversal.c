/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ans = malloc(101*sizeof(int));
    *returnSize = 0;
    pre(root,returnSize,ans);
    return ans;
}
void pre(struct TreeNode* root, int* n, int* ans)
{
    if(root == NULL) return;
    ans[*n] = root->val;
    ++*n;
    pre(root->left, n, ans);
    pre(root->right, n, ans);
    
}
