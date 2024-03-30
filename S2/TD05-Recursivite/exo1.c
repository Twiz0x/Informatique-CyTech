#include <stdio.h>

float powerIt(int a, int b) {
	int cpt = 1;
	for (int i = 0; i < b; i++) {
		cpt *= a;
	}
	return cpt;
}

float powerRec(int a, int b) {
	if (b == 0) return 1.;
	if (b < 0) return 1/powerRec(a, -b);
	return a*powerRec(a, b-1);
}

int main() {
	return 0;
}
