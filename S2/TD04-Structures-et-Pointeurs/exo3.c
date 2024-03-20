#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct {
	char nom[100];
	char prenom[100];
	int groupe;
	float notes[6];
} Etudiant;

Etudiant constructeurEtudiant() {
	Etudiant et;
	printf("Nom: ");
	scanf("%s", et.nom);
	printf("Prenom: ");
	scanf("%s", et.prenom);
	printf("Groupe: ");
	scanf("%d", &et.groupe);
	
	for (int i = 0; i < 6; i++) {
		et.notes[i] = rand() % 21;
	}
	return et;
}

void afficheEt(Etudiant et) {
	printf("---\n");
	printf("%s %s\n", et.prenom, et.nom);
	printf("Groupe: %d\n", et.groupe);
	printf("Notes: ");
	for (int i = 0; i < 5; i++) {
		printf("%g, ", et.notes[i]);
	}
	printf("et %g\n", et.notes[5]);

	printf("---\n");
}

float moyGroupe(Etudiant tab[], int taille, int groupe) {
	
}

int main() {
	Etudiant et = constructeurEtudiant();
	afficheEt(et);
	printf("Effectif de la promo: ");
	int nb;
	scanf("%d", &nb);
	Etudiant *tab = malloc(sizeof(Etudiant)*nb);
	for (int i = 0; i < nb; i++) {
		tab[i] = constructeurEtudiant();
	}
	for (int i = 0; i < nb; i++) {
		afficheEt(tab[i]);
	}
	free(tab);
	return 0;
}
