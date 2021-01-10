#define min (a, b) a > b ? b : a
int nthUglyNum(int n) {
	int *dp = (int *)malloc(sizeof(int) * n);
	int a = 0;
	int b = 0;
	int c = 0;
	dp[0] = 1;
	for (int i =1; i < n; i++) {
		int temp_1 = dp[a] * 2;
		int temp_2 = dp[b] * 3;
		int temp_3 = dp[c] * 5;
		dp[i] = min ((min(temp_1,temp_2)), temp_3);
		if (dp[i] == temp_1) {a++;}
		if (dp[i] == temp_2) {b++;}
		if (dp[i] == temp_3) {c++;}
	}
	return dp[n -1];
}
