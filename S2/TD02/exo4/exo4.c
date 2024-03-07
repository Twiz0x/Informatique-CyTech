#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 20


int randomnum() {
	return rand()%11;
}

int main() {
	srand(time(NULL));
	int tab[SIZE] = {0};
	printf("[");
	for (int i=0;i<SIZE;i++){
		tab[i] = randomnum();
		printf("%d, ", tab[i]);
	}
	printf("]\n");

	int sum = 0;
	for (int* i=tab; i<tab+20;i=i+1){
		sum += *i;
	}
	printf("Somme: %d\n", sum); 
	

}
