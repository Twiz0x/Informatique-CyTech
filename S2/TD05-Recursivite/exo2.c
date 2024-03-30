


int coef(int n, int p) {
	if (p == 0 || p == n) return 1;
	return coef(n-1, p-1) + coef(n-1, p);
}
