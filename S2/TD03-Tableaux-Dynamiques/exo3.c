#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void affichePrenom(char **prenoms, int nb) {
	for (int i = 0; i < nb; i++) {
		printf("%s\n", prenoms[i]);
	}
}

void majPrenom(char *prenom) {
	int len = strlen(prenom);
	if (len == 0) return;
	if (prenom[0] >= 'a' && prenom[0] <= 'z') prenom[0] = prenom[0] + 'A' - 'a';
	for (int i = 1; i < len; i++) {
		
		if (prenom[i] >= 'A' && prenom[i] <= 'Z') prenom[i] = prenom[i] - 'A' + 'a';
	}
}

int main() {
	char **tabPrenom = NULL;

	printf("Combien de prénoms ?");
	int nb = 0;
	scanf("%d", &nb);

	tabPrenom = malloc(sizeof(char*)*nb);
	
	char prenom[100];
	for (int i=0; i<nb;i++) {
		printf("Saisir le prénom %d/%d: ", i+1, nb);
		scanf("%s", prenom);
		majPrenom(prenom);
		
		int taille = strlen(prenom);
		tabPrenom[i] = malloc(sizeof(char)*(taille+1));
		if (tabPrenom[i] == NULL) exit(i+2);
		for (int j = 0; j<taille+1; j++) tabPrenom[i][j]=prenom[j];
	}
	
	affichePrenom(tabPrenom, nb);
	for (int i = 0; i<nb;i++) free(tabPrenom[i]);
	free(tabPrenom);
	return 0;
}
