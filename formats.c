#include <stdio.h>

#define r 2
#define g 9
float m1, m2, aux, result;


int main() {
	printf("Inserte el primer valor:\n");
	scanf("%f", &m1);

	printf("Inserte el segundo valor:\n");
	scanf("%f", &m2);

	aux = (m1 * m2) / r;
	result = g * aux;
	
	printf("El resultado de la operación es: %f\n", result);
	
	return 0;

}	
