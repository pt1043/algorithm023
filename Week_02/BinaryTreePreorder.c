void preorder (struct TreeNode*root, int *ans, int *index) {
	if (root == NULL) return;
	ans[(*index)++] = root -> val;
	preorder (root -> left, ans, index);
	preorder (root -> right, ans, index);

}
int* preorderTraversal (struct TreeNode* root, int* returnSize) {
	int index = 0;
	int * ans = (int*) malloc (sizeof (int) * 100);
	memset (ans, 0, sizeof (int) * 100);
	preorder (root, ans, &index);
	*returnSize = index;
	return ans;
}
