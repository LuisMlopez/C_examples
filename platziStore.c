#include <stdio.h>
#include <string.h>


void listProducts(void)
{
	printf("\n-- Seleccione el producto que desea comprar --\n\n");
    printf(".......... 1) 10 Tornillos  (20 €) ...........\n");
    printf(".......... 2) 20 Tuercas    (10 €) ...........\n");
    printf(".......... 3) 40 Arandelas  (8 €) ............\n");
    printf(".......... 4) 1 Martillo    (12 €) ...........\n");
    printf(".......... 5) 1 Alicate     (11 €) ...........\n");
	printf(".......... 6) 1 Taladro     (40 €) ...........\n\n");
	printf("----------------------------------------------\n\n");
	printf("------- Utilice la opción 9 para pagar -------\n\n");

}

int getSelectedProductPrice(int product)
{
	int price = 0;
	switch (product) {
		case 1:
			printf("Se han añadido 10 Tornillos (20 €) a la cesta.\n");
			price = 20;
			break;
		case 2:
			printf("Se han añadido 20 Tuercas (10 €) a la cesta.\n");
			price = 10;
			break;
		case 3:
			printf("Se han añadido 40 Arandelas (8 €) a la cesta.\n");
            price = 8;
            break;
		case 4:
			printf("Se ha añadido 1 Martillo (12 €) a la cesta.\n");
            price = 12;
            break;
		case 5:
			printf("Se ha añadido 1 Alicate (11 €) a la cesta.\n");
            price = 11;
            break;
		case 6:
			printf("Se ha añadido 1 Taladro (40 €) a la cesta.\n");
            price = 40;
            break;
	}
	return price;
}

int main(void)
{
	int isBuying = 1;
	int productSelected;
	int totalPending = 0;
	char paymentConfirmation[2];

	printf("--------------- PLATZI STORE -----------------\n");
	printf("---------------- Bienvenido ------------------\n");
	
	do
	{
		listProducts();
		scanf("%d", &productSelected);

		if (productSelected == 9)
		{
			isBuying = 2;
			printf("El total a pagar es: %d €\n", totalPending);
			
			printf("Desea pagar ahora? (si/no)\n");
			scanf("%s", paymentConfirmation);
			
			if (strcmp(paymentConfirmation, "si") == 0)
			{
				printf("Pago confirmado\n");
			}
			else
			{
				printf("Los productos se han eliminado de la cesta.\n");
				totalPending = 0;
			}

		}
		else if (productSelected < 1 || productSelected > 6)
		{
			printf("El producto seleccionado no existe, inténtelo de nuevo.\n");
		}
		else
		{
			totalPending += getSelectedProductPrice(productSelected);
			isBuying = 1;
		}

	} while (isBuying == 1);

	printf("Adios\n");

	return 0;
}
