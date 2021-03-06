//zui chang di zeng zi xu lie
//
int LengthOfLIS(int* nums, int numsSize) {
	if (numsSize <= 1) return numsSize;
	int lis[numsSize];
	int length = 1, index = 0;
	lis[index] = nums[0];
	for (int i = 1; i < numsSize; i++) {
		if (nums[i] > lis[index]) {
			lis[++index] = nums[i];
			length++;
		} else if (nums[i] < lis[index]) {
			if (index == 0) lis[index] = nums[i];
			else {
				for (int j = index; j >= 0; j--) {
					if (j == 0 || lis[j - 1] < nums[i]) {
						lis[j] = nums[i];
						break;
					}
				}
			}
		}
	}
	return length;
}
