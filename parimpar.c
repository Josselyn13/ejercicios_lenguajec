#include <stdio.h>
main()
{
int n; //se declara una variable de tipo entero
printf("Ingrese un numero"); //se pide al usuario que ingrese el n�mero
scanf("%d", &n); //se guarda en la variable
if (n%2==0) //se inicia un ciclo condicional if, donde:
{
printf("%d es par", n); //si el m�dulo es 0, es par
}
else
{
printf("%d es impar", n); //si no, es impar
}
getchar();
getchar();
return 0;
}
