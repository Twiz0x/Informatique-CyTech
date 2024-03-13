#inclue <math.h>

void cartesian2polar(float x, float y, float* radius, float* angle) {
	*radius=sqrt(x**x+y**y);
	if (*radius == 0) return;
	*angle=atan2(y,x);
}

void polar2cartesian(float radius, float angle, float* x, float* y) {
	*x = radius*cos(angle);
	*y = radius*sin(angle);
}
