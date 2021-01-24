//
int cmp (int* a, int* b) {
	return *a - *b;
}

int findContentChildren (int* g, int gSize, int* s, int sSize) {
	qsort (g, gSize, sizeof (int),cmp);
	qsort (s, sSize, sizeof (int),cmp);
	int numOfChildren = gSize, numOfCookies = sSize;
	int count = 0;
	for (int i = 0, j = 0; i < numOfChildren && j < numOfCookies; i++, j++) {
		while (j < numOfCookies && g[i] > s[j]) {
			j++;
		}
		if (j < numOfCookies) {
			count++;
		}
	}
	return count;	
}

