#include <stdio.h>
#include <stdlib.h>
void err(char *str) {
	printf("Erreur: %s\n", str);
	exit(1);
}



int sommeChiffres(int nb) {
	int cpt = 0;
	while (nb != 0) {
		cpt += nb % 10;
		nb /= 10;
	}
	return cpt;
}

int som(int nb) {
	if (nb == 0) return 0;
	return nb % 10 + som(nb/10);
}

int som2(int nb, int res) {
	if (nb == 0) return res;
	return som2(nb/10, res + nb%10);
}


int main() {
	if (sommeChiffres(219) != 12) err("1");
	if (som(219) != 12) err("2");
	if (som2(219, 0) != 12) err("3");

}
