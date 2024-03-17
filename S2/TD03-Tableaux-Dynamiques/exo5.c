#include <stdio.h>
#include <stdlib.h>

int choixNMax() {
	int nMax = 0;
	do {	
		printf("Valeur de nMax: ");
		scanf("%d", &nMax);
	} while (nMax <= 0);
	return nMax;
}

int** creerTriangle(int nMax) {
	int** triangle = malloc(sizeof(int*)*(nMax+1));
	if (triangle == NULL) exit(0);
	for (int n = 0; n <= nMax; n++) {
		triangle[n] = malloc(sizeof(int)*(n+1));
		if (triangle[n] == NULL) exit(0);
		
		triangle[n][0] = 1, triangle[n][n] = 1;
		for (int k = 1; k < n; k++) {
			triangle[n][k] = triangle[n-1][k-1] + triangle[n-1][k];
		}
	}
	return triangle;
}

void affichePascal(int **tab, int nMax) {
	for (int n = 0; n <= nMax; n++) {
		for (int k = 0; k <= n; k++) {
			printf("%d ", tab[n][k]);
		}
		printf("\n");
	}
}


int main() {

	int nMax = choixNMax();
	int** tab = creerTriangle(nMax);
	affichePascal(tab, nMax);

}
