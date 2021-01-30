//

int longestCommonSubsequence (char *text1, char *test2) {
	int length1 = strlen (text1), length2 = strlen (text2);

	int i,j;
	int dp[length1 + 1][length2 + 1];

	for (i = 0; i <= length1; i++)
		dp[i][0] = 0;
	for (j = 0; j <= length2; j++)
		dp[0][j] = 0;

	for (i = 0; i < length1; i++)
		for (j = 0; j < length2; j++) {
			if (text1[i] == text2[j])
				dp[i + 1][j + 1] = dp[i][j] + 1;
			else
				dp[i + 1][j + 1] = dp[i + 1][j] > dp[i][j + 1]?dp[i + 1][j]:dp[i][j + 1];
		}
	return dp[length1][length2];
}
