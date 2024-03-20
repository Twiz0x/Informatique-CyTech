#include <stdio.h>

typedef struct {
	int num, den;
} NmbRationnel;

void afficheNum(NmbRationnel nb) {
	printf("%d/%d\n", nb.num, nb.den);
}

void addMult(NmbRationnel *num1, NmbRationnel *num2) {
	NmbRationnel temp;
	temp.num = num2->num;
	temp.den = num2->den;
	num2->num = num1->num * num2-> den + num1-> den * num2->num;
	num2->den = num1->den*num2->den;
	
	num1->num *= temp.num;
	num1->den *= temp.den;
}

NmbRationnel* creerRationnel() {
	NmbRationnel* nb;
	printf("Saisir numérateur: ");
	scanf("%d", &(nb->num));
	printf("Saisir dénominateur: ");
	scanf("%d", &(nb->den));
	if (nb->den < 0) {
		nb->den *= -1;
		nb->num *= -1;
	}
	return nb;
}

int main() {
	NmbRationnel a, b;
	a = *creerRationnel();
	b = *creerRationnel();
	addMult(&a, &b);
	printf("Produit: ");
	afficheNum(a);
	printf("Somme: ");
	afficheNum(b);
	return 0;
}
