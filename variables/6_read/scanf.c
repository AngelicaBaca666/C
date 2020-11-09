#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
int r;
float l, a,c;
printf("Introduce radio (entero): ");
scanf("%d", &r);
l=2*PI*r; 
a=pow(r,2)*PI;
printf("La longitud de la circunferencia vale % 0.2f\n", l);
printf("El Area del circulo vale % 0.2f\n", a);
}
