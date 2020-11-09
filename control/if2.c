#include <stdio.h> //Cabecera
int main()
{
	int edad; // Variable
	printf("Introduce tu edad: ");
	scanf("%d",&edad); // Lectura

	if (edad >17 && edad <35)
	{
		 printf("Tienes %d anios, eres mayor de edad",edad);
	}
	else if (edad < 17)
	{
		 printf("Tienes %d anios, eres menor de edad",edad);
	}
	else if (edad >= 35 && edad <= 60)
	{
		 printf("Tienes %d anios, eres adulto joven",edad);
	}
	else
	{
		 printf("Tienes %d anios, eres adulto mayor \n ",edad);
	}
  return 0;
} 	
