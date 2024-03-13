#include <stdio.h>
#include <math.h>

int resoudre1(float a, float b, float *res) {
	if (a==0 && b==0) return -1;
	if (a==0) return 0;
	*res = -b/a;
	return 1;
}

int resoudre2(float a, float b, float c, float *res1, float *res2) {
	float delta = b*b - 4*a*c;
	if (delta < 0) return 0;
	*res1 = (-b-sqrt(delta))/(2*a);
	if (delta == 0) return 1;
	*res2 = (-b+sqrt(delta))/(2*a);
	return 2;  
}

