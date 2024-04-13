void post(struct TreeNode* root, int* n, int* ans)
{
    if(root == NULL) return;
    post(root->left, n, ans);
    post(root->right, n, ans);
    ans[*n] = root->val;
    ++*n;
}

int countNodes(struct TreeNode* root) {
    if (root == NULL) return 0;
    return 1 + countNodes(root->left) + countNodes(root->right);
}

int* postorderTraversal(struct TreeNode* root, int* returnSize){
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }

    int nodeCount = countNodes(root);

    int* ans = malloc(nodeCount * sizeof(int));
    *returnSize = 0;
    post(root, returnSize, ans);
    return ans;
}
