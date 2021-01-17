
#define MAX_SIZE 5000

static void swap (int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

static void dfs (int* nums, int numsSize, int* returnSize, int** returnColSizes, int** ppRes) {
	static int slow = 0;
	int fast = 0;
	if (slow == numSize) {
		ppRes[*returnSize] = (int*) malloc (numsSize * sizeof (int) );
		memcpy (ppRes[*returnSize], nums, numsSize * sizeof (int) );
		(*returnColSizes)[*returnSize] = numsSize;
		(*returnSize)++;
	}
	else {
		for (fast = slow; fast <= numsSize - 1; fast++) {
			swap (nums + slow, nums + fast);
			slow++;
			dfs (nums, numsSize, returnSize, returnColSizes, ppRes);
			slow--; //Backtracking
			swap (nums + slow, nums + fast);
		}
	}
}

int** permu (int* nums, int numsSize, int* returnSize, int** returnColSizes) {
	int** ppRes = (int**) malloc (MAX_SIZE * sizeof (int) );
        *returnSize = 0;
	*returnColSizes = (int*) malloc (MAX_SIZE * sizeof (int) );
	dfs (nums, numsSize, returnSize, returnColSizes, ppRes);
	return ppRes;	
}
