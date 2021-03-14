//super-egg-drop

int egg(int K, int T) {
	if (T == 1 || K == 1)
		return T +1;
	return egg(K - 1, T - 1) + egg(K, T - 1);
}

int superEggDrop(int k, int n) {
	int T = 1;
	while (egg(k, T) < n + 1)
		T++;
	return T;
}
