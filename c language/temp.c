#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	double F = 0;
	double C = 0;
	scanf("%lf", &F);
	C = 5 *(F - 32) / 9;
	printf("%f", C);
	return 0;
}