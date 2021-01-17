
int* temp;
int tempSize;

int** ans;
int ansSize;

void dfs(int cur, int n, int k) {
	if (tempSize + (n - cur + 1) < k) {
		return;
		}
	if(tempSize == k) {
		int* tmp = malloc(sizeof(int) * k);
		for (int i = 0; i < k; i++) {
			tmp[i] = temp[i];
			}
		ans[ansSize++] = tmp;
		return;
		}
	temp[tempSize++] = cur;
	dfs (cur +1, n, k);
	tempsize--;
	dfs (cur + 1, n, k);
}

int** combi (int n, int k, int* returnSize, int** returnColSizes) {
	temp = malloc (sizeof(int) * k);
	ans = malloc (sizeof(int*) * 10001);
	tempSize = ansSize = 0;
	dfs ( 1, n, k);
	*returnSize = ansSize;
	*returnColSizes = malloc ( sizeof(int) * ansSize);
	for (int i = 0; i < ansSize; i++) {
		(*returnColSizes)[i] = k;
		}
	return ans;
}
