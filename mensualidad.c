#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() { //establecemos las variables a ocupar
	int p = 10000;
	float i = 0.5;
	int a = 2;
	float im;
	int n;
	float inter;
	float PagoMes;
	double pot;
	
	//desarrollamos la fórmula desglosada
	im = (i / 12);
	n = (12*a);
	pot = pow((1+im),n);
	inter = (pot*im)/(pot-1);
	PagoMes = (p*inter);
	
  printf("El interés mensual es %f\n", PagoMes); //mostramos al usuario el pago que hará mensualmente
  return 0;
}
