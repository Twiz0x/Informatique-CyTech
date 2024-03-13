#include <stdio.h>
#include <string.h>

int main() {

	char tab[100] = {};
	printf("Saisir un mot: ");
	scanf("%s", tab);
	int taille = strlen(tab);
	int tpal = 0;
	for (char *deb=tab, *fin=tab+taille-1; deb != fin && deb < fin; deb++, fin-=1) {
		if (*deb == *fin) tpal++;
	}

	printf("Taille du palindrome: %d\n", tpal);
	

	return 0;
}
