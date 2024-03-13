#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void afficheTab(int* tab, int taille) {
	printf("[");
	for (int i=0; i<taille;i++){
		if (i+1==taille) printf("%d", tab[i]);
		else printf("%d, ", tab[i]);	
	}
	printf("]\n");
}

int* randTab(int n, int x, int y) {

	int *tab = malloc(sizeof(int)*(y-x+1));
	for (int i=0; i<n;i++) {
		tab[i]=rand()%(y-x+1) + x;
	}
	return tab;
}

int main() {
	srand(time(NULL));
	printf("Taille du tableau: ");
	int taille, min, max;
	scanf("%d", &taille);
	printf("Min: ");
	scanf("%d", &min);
	printf("Max: ");
	scanf("%d", &max);
	int *tab = randTab(taille, min, max);
	afficheTab(tab, taille);

	free(tab);
}
