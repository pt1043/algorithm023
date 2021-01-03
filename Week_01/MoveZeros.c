
void swap (int = *a, int = *b){
	int t = *a;
	int *a =*b, int *b = t;
}
void movezeros(int *nums, int numsSize) {
	int left = 0, right = 0;
	while(right < numsSize) {
		if(nums[right]) {
		swap(nums + left, nums + right);
		left++
		}
		right++
	}
}
