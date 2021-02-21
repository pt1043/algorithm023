//n queens 2


int solve (int n, int row, int column, int slash, int backslash) {
	if (row == n) {
		return 1;
	} else {
		int count = 0;
		int availablePositions = ((1 << n) - 1) & (~(column | slash | backslash));
		while (availablePositions != 0) {
			int position = availablePositions & (-availablePositions);
			availablePositions = availablePositions & (availablePositions - 1);
			count += solve (n, row + 1, column | position, (slash | position) << 1, (backslash | position) >> 1);
		}
		return count;
	}
}

int totalNQueens (int n) {
	return solve (n, 0, 0, 0, 0);
}
