#include <stdio.h>
#include <stdlib.h>
#include<math.h>

float a, b, c; //Declarando variable
int main()

{
	int opcion;
	
	printf("\Dame el \'primer\' numero: ");
    scanf("%f",&a);
     
    printf("\nDame el \'segundo\' numero: ");
    scanf("%f",&b);
	
	printf("Elige una opcion: \n");
	
	printf("\t 1.- Suma:\n");
	
	printf("\t 2.- Resta:\n");
	
	printf("\t 3.- Muliplicacion:\n");
	
	printf("\t 4.- Division:\n");
	
	printf("\t 5.- Potencia:\n");
	
	printf("\t 6.- Raiz:\n");
	
	printf("\t 7.- Salir:\n");
	
	scanf("%d",&opcion);
	switch(opcion)
	{
	case 1: 
		c= a + b ; //Suma
		printf("La suma es: %f" , c) ;
		break;
	case 2: 
	    c= a - b ; //Resta
	    printf("La resta es: %f" , c) ;  
		break;
	case 3:
		c= a * b ; //Multiplicacion
		printf("La multiplicacion es: %f" , c) ;
		break;
	case 4:
		c= a / b ;  //Division
		printf("La division es: %f" , c) ;
		break;
	case 5:
		c=pow (a , b) ; //Potencia
		printf("\t %f elevado a la potencia / %f= %f \n" ,a , b, c);
		c=pow (a , a);
		printf("\t %f elevado a la potencia / %f= %f \n" ,a , b, c);
		break;	
	case 6:
		c= sqrt(a); //Raiz 
		printf("La Raiz Cuadrada de %f es: %f \n" , a, c) ;
        c=sqrt (b);
	    printf( "La Raiz Cuadrada de %f es: %f" , b, c);
		break;
	case 7:
		exit(0) ; //Salida
	default:
		printf("No esta puesta correctamente la opcion\n");
		exit(0);
	}
	printf("\nFin del switch \n" );
	return 0 ;
} 
