
#include<stdio.h>
#include<string.h>
#define N 10


/*establecemos una primera funci�n que no devuelve nada
pero hace un recorrido de mi array con las variables ingresadas, que son las combinaciones
hasta n que es el n�mero que se le solicita al usuario*/
void print(int *num, int n)
{		
    int i;
    for ( i = 0 ; i < n ; i++)
        printf("%d ", num[i]);
    printf("\n");
}

/*esta funci�n establece las variables que usaremos
y los array*/
int main()
{
    int num[N]; //variable global establecida y fija
    int temp; //establecemos una variable temp para realizar las vombinaciones
    int i, n, j; //enteros solicitados al usuario
    printf("\nDe cu�ntos n�meros quieres la lista: ");
        scanf("%d", &n);
    printf("\nIngresa los numerps de los que quieres ver las combinaciones:\n");
    for (i = 0 ; i < n; i++) //para todo i que sea menor a n (1er petici�n) entonces aumenta en 1
        scanf("%d", &num[i]);
    for (j = 1; j <= n; j++) { //hay for anidados porque es d�nde hace el ordenamiento de n�meros ingresados en lista
        for (i = 0; i < n-1; i++) {
            temp = num[i]; //aqu� los va escribiendo conforme salgan las combinaciones
            num[i] = num[i+1];
            num[i+1] = temp;
            print(num, n);
	}
    }
    return 0;
}
