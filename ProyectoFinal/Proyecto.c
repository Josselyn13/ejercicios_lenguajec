#include<stdio.h>

int anioActual = 2022;
#define PRECIO_HORA_EXTRA 60
#define BONIFICACION_DEPARTAMENTO_A 2750

int main(){
	
	int edad, anioNacimiento, horasExtraTrabajadas, haRealizadoHorasExtra, sueldoAnual;
	float sueldoTotalAnual, totalHorasExtraAPagar, ingresosMensualesDuranteUnAnio[12];
	char departamento;
	
	printf("\n\nA continuacion vamos a pedirle algunos datos personales \n\n");
	printf("�Qu� edad tiene?: ");
	scanf("%d", &edad);
	
	for (int mes = 0; mes < 12; mes++){
		printf("�Cu�l es su sueldo para el mes %d?: ", mes+1);
		scanf("%f", &ingresosMensualesDuranteUnAnio[mes]);
	}
	
	printf("�A qu� departamento pertence?: ");
	scanf(" %c", &departamento);
	
	printf("�Cu�ntas horas extra has trabajado este a�o?: ");
	scanf(" %d", &horasExtraTrabajadas);
	
	anioNacimiento = anioActual - edad;
	totalHorasExtraAPagar = horasExtraTrabajadas * PRECIO_HORA_EXTRA;
	haRealizadoHorasExtra = totalHorasExtraAPagar;
	
	sueldoAnual = 0;
	
	for (int mes = 0; mes < 12; mes++){
		sueldoAnual = sueldoAnual + ingresosMensualesDuranteUnAnio[mes];
	}	
	
	if(departamento == "A" || departamento == "a"){
		sueldoTotalAnual = sueldoAnual + BONIFICACION_DEPARTAMENTO_A;
	}
	
	
	return 0;
}
