#include <stdio.h>


int getExtremums(int* tab, int n, int** petit, int** grand) {
	if (tab == NULL || n == 0) return 1;
	*petit = tab;
	*grand = tab;
	for (int i=1; i < n; i++) {
		if (tab[i] < **petit) *petit = tab + i;
		if (tab[i] > **grand) *grand = tab + i;
	}
	return 0;
}

int main() {

	int tab[] = {0, 1, 2, 3, 4};
	int* petit = NULL, *grand = NULL;
	int err = getExtremums(tab, 5, &petit, &grand);
	if (err) printf("Erreur\n");
	else printf("Min: %d, max: %d\n", *petit, *grand);
	return 0;
}
