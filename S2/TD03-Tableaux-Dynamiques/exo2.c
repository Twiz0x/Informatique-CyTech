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

int* tabPair(int *tab, int *taille) {
	int *tab2 = NULL;
	int nbPair = 0;
	for (int i =0; i<*taille; i++) {
		if (tab[i] % 2 == 0) nbPair++;
	}
	tab2 = malloc(sizeof(int)*nbPair);
	for (int i = 0, j = 0; i < *taille; i++) {
		if (tab[i] % 2 == 0) tab2[j++] = tab[i];
	}
	*taille = nbPair;
	return tab2;
}

int* noDouble(int tab[], int *taille) {
	int doubles = 0;
	for (int i = 0; i < *taille - 1; i++) {
		if (tab[i] == tab[i+1]) doubles++;
	}
	int *newTab = malloc(sizeof(int)*(*taille-doubles));
	for (int i = 0, j = 0; i < *taille; i++) {
		if (i == 0 || tab[i] != tab[i-1]) {
			newTab[j++] = tab[i];
		}
	}
	*taille = *taille-doubles;
	return newTab;
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

	int *tabNoDouble = noDouble(tab, &taille);
	afficheTab(tabNoDouble, taille);

	int *newTab = tabPair(tabNoDouble, &taille);
	afficheTab(newTab, taille);
	free(tab);
	free(newTab);
	free(tabNoDouble);
}
