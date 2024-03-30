#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void affiche(int *tab, int taille) {
	if (taille == 1) {
		printf("%d\n", tab[0]);
		return;
	}
	printf("%d, ", tab[0]);
	affiche(tab+1, taille-1);
}

int max(int *tab, int taille) {
	if (taille == 1) return tab[0];
	if (taille <= 0) return -1;
	int maxi = max(tab+1, taille-1);
	if (tab[0] > maxi) return tab[0];
	return maxi;
}

int div_trois_bis(int *tab, int taille) {
	if (taille <= 0) return 0;
	
	return ((tab[taille - 1] % 3) == 0) + div_trois_bis(tab, taille-1);
}

int div_trois(int *tab, int taille) {
	if (taille <= 0) return 0;

	return ((tab[0] % 3) == 0) + div_trois(tab + 1, taille - 1);
}

int main() {
	srand(time(NULL));

	int taille = rand()%(10-5+1) + 5;
	int* tab = malloc(4*taille);
	for (int i = 0; i < taille; i++) {
		tab[i] = rand()%51 + 1;
	}
	affiche(tab, taille);
	printf("Max: %d\n", max(tab, taille));
	printf("Div par 3: %d\n", div_trois(tab, taille));
	printf("Div par 3_bis: %d\n", div_trois_bis(tab, taille));
	free(tab);
}
