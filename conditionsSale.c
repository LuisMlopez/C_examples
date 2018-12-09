#include <stdio.h>

#define product1Name "Lata de Atún"
#define product1Price 100
#define product2Name "Pan"
#define product2Price 500
#define product3Name "Gaseosa"
#define product3Price 1000
#define product4Name "Arroz"
#define product4Price 600

int main(void)
{
	int choice, quantity, valid = 1;

	printf("Productos disponibles: \n");
	printf("-----------------------\n");
	printf("1) %s (%d).\n", product1Name, product1Price);
	printf("2) %s (%d).\n", product2Name, product2Price);
	printf("3) %s (%d).\n", product3Name, product3Price);
	printf("4) %s (%d).\n", product4Name, product4Price);
	printf("-----------------------\n");
	printf("Seleccione el producto que desea comprar: ");
	scanf("%d", &choice);

	if (choice >= 1 && choice <= 4)
	{
		printf("\nIndique la cantidad que desea comprar: ");
		scanf("%d", &quantity);
		printf("\n");
	}
	else
	{
		printf("La opción seleccionada no es válida.");
		valid = 0;
	}

	if (valid)
	{
		int total;
		switch (choice)
		{
			case 1:
				total = product1Price * quantity;	
				printf("Ha seleccionado %d unidades del producto %s (%d). El total a pagar es de %d\n", quantity, product1Name, product1Price, total);
				break;
			case 2:
                                total = product2Price * quantity;
                                printf("Ha seleccionado %d unidades del producto %s (%d). El total a pagar es de %d\n", quantity, product2Name, product2Price, total);
                                break;
			case 3:
                                total = product3Price * quantity;
                                printf("Ha seleccionado %d unidades del producto %s (%d). El total a pagar es de %d\n", quantity, product3Name, product3Price, total);
                                break;
			case 4:
                                total = product4Price * quantity;
                                printf("Ha seleccionado %d unidades del producto %s (%d). El total a pagar es de %d\n", quantity, product4Name, product4Price, total);
                                break;
			default:
				printf("Te has equivocado, pero no deberías haber llegado hasta este punto!!!");
				break;
		}
	}
}

