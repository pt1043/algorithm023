//kuo hao sheng cheng
//
#define MAX_SIZE 1430
void generate (int left, int right, int n, char *str, int index, char **result, int *returnSize) {
	if (left == n && right == n) {
		result[(*returnSize)] = (char*) calloc ((2 * n + 1), sizeof (char));
		strcpy (result[(*returnSize)++], str);
		return;
	}
	if (left < n) {
		str[index] = '(';
		generate (left + 1, right, n, str, index + 1, result, returnSize);
	}
	if (left > right && right < n) {
		str[index] = ')';
		generate (left, rihgt + 1, n, str, index + 1, result, returnSize);			
	}
}

char **generateParenthesis (int n, int *returnSize) {
	char *str = (char*) calloc ((2 * n + 1), sizeof (char));
	char **result = (char **) calloc (sizeof (char *) * MAX_SIZE);
	*returnSize = 0;
	genrate (0, 0, n, str, 0, result, returnSize);
	return result;
}
