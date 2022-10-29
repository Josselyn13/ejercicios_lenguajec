# include <stdio.h>
struct coche {
char fabricante[15];
char modelo[15];
char matricula[20];
int antiguedad;
long int kilometraje;
float precio_nuevo;
} miauto;
main()
{
printf("Introduzca el fabricante del coche.\n");
gets(miauto.fabricante);
printf("Introduzca el modelo.\n");
gets(miauto.modelo);
printf("Introduzca la matricula.\n");
gets(miauto.matricula);
printf("Introduzca la antiguedad.\n");
scanf("%d",&miauto.antiguedad);
printf("Introduzca el kilometraje.\n");
scanf("%ld",&miauto.kilometraje);
printf("Introduzca el precio.\n");
scanf("%f",&miauto.precio_nuevo);
getchar(); /*vacia la memoria intermedia del teclado*/
printf("\n\n\n");
printf("Un %s %s con %d años de antiguedad con número de matricula %s\n",miauto.fabricante,miauto.modelo,miauto.antiguedad,miauto.matricula);
printf("actualmente con %ld kilómetros",miauto.kilometraje);
printf(" y que fue comprado por $%5.2f\n",miauto.precio_nuevo);
return(0);
}
