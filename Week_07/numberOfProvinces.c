//sheng fen shu liang

int findCircleNum (int** isConnected, int isConnectedSize, int* isConnectedColSize) {
	int provinces = isConnectedSize;
	int visited[provinces];
	memset (visited, 0, sizeof(visited));
	int circles = 0;
	int que[provinces * provinces];
	int left = 0, right = 0;
	for (int i = 0; i < provinces; i++) {
		if (!visited[i]) {
			que[right++] = i;
			while (left < right) {
				int j = que[left++];
				visited[j] = true;
				for (int k = 0; k < provinces; k++) {
					if (isConnected[j][k] == 1 && !visited[k]) {
						que[right++] = k;
					}
				}
			}
			circles++;
		}
	}
	return circles;
}
