//Calcular el factorial de un numero
#include <stdio.h>

int main()
{
  int a, b, fact = 1; //declarar variables a utilizar

  printf("Escribe un numero para calcular su factorial\n");
  scanf("%d", &a);  //Pedir al usuario un n�mero que se guarda en a

  for (b = a; b > 1; b--){ //inicializamos una variable b que es igual a a y se ir� restando en uno
    fact = fact * b; //entonces se multiplicar� nuestro contador hac�a atras
}
  printf("El factorial de %d = %d\n", a, fact); //imprimir� el factorial
  getchar();
  getchar();
  return 0;
}
