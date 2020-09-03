/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
	setbuf(stdout,NULL);
	int i=0;

	int personas=5;
	int edad=0;
	int cantidadM=0;
	int cantidadF=0;
	int banderaTemperatura=0;
	int mujerConMayorTemperatura=0;
	int edadTotal=0;
	float temperatura=0;
	char MujerConMayorTemperatura;
	char InicialNombre;
	char sexo;


	for(i=0; i<personas; i++)
	{
		printf("Pon la inicial de tu nombre o apellido: ");
		fflush(stdin);
		scanf("%c", &InicialNombre);

		do
		{
			printf("Cual es tu sexualidad f/m ");
			fflush(stdin);
			scanf("%c", &sexo);
		}while(sexo!='m' && sexo!='f');

		do{
			printf("Ingresar edad: ");
			scanf("%d", &edad);
		}while(edad<1);
		edadTotal+=edad;

		do{
			printf("Ingresar temperatura: ");
			scanf("%f", &temperatura);
		}while(temperatura<0 || temperatura>50);

		switch(sexo){
			case 'f':
				cantidadF++;
				if(banderaTemperatura == 0 || mujerConMayorTemperatura<temperatura)
				{
					mujerConMayorTemperatura=temperatura;
					MujerConMayorTemperatura=InicialNombre;
					banderaTemperatura=1;
				}
				break;
			default:
				cantidadM++;
				break;
		}


	}
	if(cantidadF > 0)
	{
		printf("La cantidad de mujeres son de: %d", cantidadF);
		printf("\nLa inicial de la mujer con mayor temperatura es: %c", MujerConMayorTemperatura);
	}
	if(cantidadM > 0)
	{
		printf("\nLa cantidad de hombres son de: %d", cantidadM);
	}
	printf("La edad promedio de las personas que ingresaron es: %d", (edadTotal/personas));
	return 0;

}
