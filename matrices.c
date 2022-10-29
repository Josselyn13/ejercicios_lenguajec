#include<stdio.h>    
#include<stdlib.h>  


int main(){  
int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    //Se establecen matrices de 10 x 10 y variables a ocupar
system("cls");  
printf("Ingresa el número de filas: ");    //Se pide al usuario el tamaño de la matriz
scanf("%d",&r);    
printf("Ingresa el número de columnas: ");    
scanf("%d",&c);    
printf("Ingresa los números de la primera matriz\n");    //Se pide el ingreso por filas de la matriz
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&a[i][j]);    //se guardan los valores de la matriz a
}    
}    
printf("Ingresa los números de la segunda matriz\n");    //Se ingresa la segunda matriz
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
scanf("%d",&b[i][j]);    //guarda valores de la matriz b
}    
}    
    
printf("Multiplicación de la matriz\n");    //se realiza la multiplicación de la matriz
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
mul[i][j]=0;    //Establecemos un arreglo inicializado en 0
for(k=0;k<c;k++)    
{    
mul[i][j]+=a[i][k]*b[k][j];    //Se realiza la operación de filas a con columnas b
}    
}    
}    
//Resultado impreso   
for(i=0;i<r;i++)    
{    
for(j=0;j<c;j++)    
{    
printf("%d\t",mul[i][j]);    
}    
printf("\n");    
}    
return 0;  
}  
