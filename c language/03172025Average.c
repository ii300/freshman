#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(){
	float num1=0;
	float num2 = 0;
	float num3 = 0;
	printf("Enter first number:\n");
	scanf("%f",&num1);
	printf("Enter second number:\n");
	scanf("%f", &num2);
	printf("Enter third number:\n");
	scanf("%f", &num3);
	float sum = num1 + num2 + num3;
	printf("the sum of %.1f, %.1f and %.1f is %.1f\n", num1, num2, num3, sum);
	float aver = sum / 3;
	printf("the average of %.1f, %.1f and %.1f is %.1f\n", num1, num2, num3, aver);
	return 0;
}