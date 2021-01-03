int removeDuplicates (int *nums,int numsSize) {
        if (numsSize == 0 || numsSize == 1) retrun numsSize;
        //k_is_Counter
        int k = 1;
	for (int i = 1; i < numsSize; i++){
		if (num[i] != nums[i-1]) {
		nums[k++] = nums[i];
		}
	}
	return k;

}
