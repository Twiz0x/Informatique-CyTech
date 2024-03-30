int sommeEntiers(int a, int b) {
	if (a > b) return 0;
	if (a == b) return a;
	return a + b + sommeEntiers(a+1, b-1);
}

int sommeEntiersCroissant(int a, int b) {
	if (a == b) return a;
	if (a < b) return 0;
	return a + sommeEntiersCroissant(a+1, b);
}

int sommeEntiersDecroissant(int a, int b) {
	if (a < b) return 0;
	if (a == b) return a;
	return b + sommeEntiersDecroissant(int a, int b-1);

}
