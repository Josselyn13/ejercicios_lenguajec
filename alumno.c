# include <stdio.h>

//Declaración del formato de la estructura
struct alumno {
char nombre[25];
long int numero_de_cuenta[10];
char licenciatura[20];
int semestre;
float promedio;
} mialumno;

//Pedimos la información al usuario y las guardamos en variables
main()
{
printf("Introduzca el nombre del alumno.\n");
scanf("%s", &mialumno.nombre);
printf("Introduzca el numero de cuenta del alumno.\n");
scanf("%ld", &mialumno.numero_de_cuenta);
printf("Introduzca la licenciatura del alumno.\n");
scanf("%s", &mialumno.licenciatura);
printf("Introduzca el semestre del alumno.\n");
scanf("%d", &mialumno.semestre);
printf("Introduzca el promedio del alumno.\n");
scanf("%f", &mialumno.promedio);

getchar(); /*vacia la memoria intermedia del teclado*/

printf("\n\n\n");
printf("El alumno %s con número de cuenta %ld y que cursa la licenciatura en %s\n",mialumno.nombre, mialumno.numero_de_cuenta, mialumno.licenciatura);
printf("actualmente cursa el semestre %d", mialumno.semestre);
printf(" y tiene promedio de %.2f\n", mialumno.promedio);
return(0);
}
