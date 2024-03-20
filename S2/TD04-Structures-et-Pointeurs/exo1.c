#include <math.h>
#include <stdio.h>
typedef struct {
	float re;
	float im;
} Complex;

int resolve(float a, float b, float c, Complex *res1, Complex *res2) {
	float delta = b*b - 4*a*c;
	if (delta > 0) {
		res1->re = -b/(2*a) + sqrt(delta)/(2*a);
		res1->im = 0;
		res2->re = -b/(2*a) - sqrt(delta)/(2*a);
		res2->im = 0;
		return 2;
	}
	if (delta == 0) {
		res1->re = -b/(2*a);
		return 1;
	}
	
	res1->re = -b/(2*a);
	res1->im = sqrt(-delta)/(2*a);
	res2->re = -b/(2*a);
	res2->im = -sqrt(-delta)/(2*a);
	return 2;
	
}

int main() {

	Complex x1, x2;
	float a, b, c;
	printf("Saisir 3 réels ");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	int sol = resolve(a, b, c, &x1, &x2);
	if (sol == 1) {
		printf("1 solution: %g\n", x1.re);
	}
	if (sol == 2) {
		printf("2 solutions: x1=%g + i*(%g), x2= %g + i*(%g)\n", x1.re, x1.im, x2.re, x2.im);
	}
	return 0;
}
