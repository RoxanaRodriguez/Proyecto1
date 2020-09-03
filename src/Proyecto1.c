/*
 ============================================================================
 Name        : Proyecto1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MENSAJE "Hola mundo, ya es hora del recreo\n"


int main(void)
{

	int num1;
	int num2;
	int suma;

	printf("Ingrese un nùmero: \n");
	scanf("%d",&num1);
	printf("Ingrese otro nùmero: \n");
	scanf("%d",&num2);

	suma=num1+num2;
	printf("La suma es: %d",suma);

	return EXIT_SUCCESS;
}
