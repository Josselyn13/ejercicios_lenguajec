
#include <stdio.h>
#include <string.h> /* gets, strcmp */
#include <stdlib.h> /* system */


/*Se establecen variables que no van a cambiar*/
#define TECLA_ENTER 13
#define TECLA_BACKSPACE 8
#define LONGITUD 5
#define MAX_INTENTOS 3

#define NUMERO_USUARIOS 5


int main() {
	char usuario[LONGITUD + 1];
	char clave[LONGITUD + 1];
	int intento = 0;
	int ingresa = 0;
	char caracter;
	int i = 0;
    int j = 0;

    /* Inicialización de arreglos de usuarios y contraseñas */
    char usuarios[NUMERO_USUARIOS][LONGITUD + 1] = {"luis", "jorge", "james", "johan", "kevin"};
    char claves[NUMERO_USUARIOS][LONGITUD + 1] = {"123", "456", "789", "abc", "efg"};
	
	//Se realiza un muestra un menú para usuario para ingresar usuario y contraseña
	do {
		i = 0;
		system("cls");
		printf("\n\t\t\tINICIO DE SESION\n");
		printf("\t\t\t---------------\n");
		printf("\n\tUSUARIO: ");
		gets(usuario);
		printf("\tCLAVE: ");
		while (caracter = getch()) {
			if (caracter == TECLA_ENTER) {
				clave[i] = '\0';
				break;
				
			} else if (caracter == TECLA_BACKSPACE) {
				if (i > 0) {
					i--;
					printf("\b \b");
				}
				
			} else {
				if (i < LONGITUD) {
					printf("*");
					clave[i] = caracter;
					i++;
				}
			}
		}
		
        /* El usuario y clave debe coincidir con alguno de los que se encuentran en el array */
        for (j = 0; j < NUMERO_USUARIOS; ++j) {
            if (strcmp(usuario, usuarios[j]) == 0 && strcmp(clave, claves[j]) == 0) {
                ingresa = 1;
                break;
                
            }
        }

        if (ingresa == 0) {
            printf("\n\tUsuario y/o clave son incorrectos\n");
            intento++;
            getchar();
        }
		
		
	} while (intento < MAX_INTENTOS && ingresa == 0);
	
	if (ingresa == 1) {
		printf("\n\n\tBienvenido!\n");
		
        

	} else {
		printf("\n\n\tUsuario no autorizado\n");
	}

	return 0;
}



