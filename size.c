#include<stdio.h>
#include<limits.h>
#include<float.h>

int main() {
	printf("Size of int: %lu \n", sizeof(int));
	printf("Size of short: %lu \n", sizeof(short));
	printf("Size of float: %lu \n", sizeof(float));
	printf("Size of Minimum float positive: %lu \n", sizeof(FLT_MIN));
	printf("Size of Maximum float positive: %lu \n", sizeof(FLT_MAX));
	printf("Size of Precision value: %lu \n", sizeof(FLT_DIG));

	return 0;
}
