#include <stdio.h>

int main()
{
	float a, b, c, Perimetro; //Declarando variables
	
	printf ("Dame el Lado a: ") ;
	scanf (" %f", &a) ;
	
	printf ("Dame el Lado b: ") ;
	scanf (" %f" , &b) ;
	
	printf ("Dame el Lado c: ") ;
	scanf ("%f", &c) ;
	
	Perimetro = a+b+c ; //Realiza calculo de perimetro
	printf ("Perimetro : %.2f\n" , Perimetro );

	return 0;	
}




