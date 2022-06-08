#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
#include <math.h>
#include "fxlt.h"
#include "ejerciciosAdicional.h"

void ejercicio1(void){
	printf("1: Determinar si un numero es POSITIVO.\n");
	
	int num=lt_getInt("\nIngrese un numero: ");
					
	if(num>=0)
	{
		printf("El Numero %d es positivo",num);
	}
	else
	{
		printf("El Numero %d es negativo",num);
	}		
}

void ejercicio2(void){
	printf("2: Determinar si un numero es POSITIVO, NEGATIVO o CERO.\n");
	
	int num=lt_getInt("\nIngrese un numero: ");
					
	if(num>0)
	{
		printf("El Numero %d es positivo",num);
	}
	if(num<0)
	{
		printf("El Numero %d es negativo",num);
	}
	else
	{
		printf("El Numero %d es CERO",num);
	}		
}

void ejercicio3(void){
	printf("3: Determinar si un numero es PAR o IMPAR.\n");
	
	int num=lt_getInt("\nIngrese un numero: ");
					
	if(num%2==0)
	{
		printf("El Numero %d es par",num);
	}
	else
	{
		printf("El Numero %d es impar",num);
	}	
}

void ejercicio4(void){
	printf("4: Leer un numero y calcular el 5%% del numero leido.\n");
	
	int num=lt_getInt("\nIngrese un numero: ");
					
	printf("El 5%% de %d es: %.2f",num,(num*0.05));	
}

void ejercicio5(void){
	
	printf("5: Sumar 2 numeros y mostrar el resultado solo si la suma es mayor a 25. En case contrario mostrar el mensaje `La suma no se mostrara en pantalla`.\n");
	
	float a,b, ans;

	a=lt_getFloat("\nIngrese un numero: ");
	b=lt_getFloat("\nIngrese otro numero: ");
	
	ans= a+b;
			
	if(ans>25)
	{
		printf("\nLa suma es: %.2f",ans);
	}
	else
	{
		printf("\nLa suma no se mostrara en pantalla");
	}
}

void ejercicio6(void){
	
	printf("6: Ingresar el nombre y la edad de una persona y mostrar si es mayor o menor de edad.\n");
	
	char nombre[51];
	int edad;
	
	lt_getTexto("\nIngrese el nombre de la persona: ", nombre,51);
	
	edad=lt_getInt("\nIngrese la edad de la persona: ");
	
	if(edad>=18)
	{
		printf("\n%s es mayor de edad",nombre);
	}
	else
	{
		printf("\n%s es menor de edad",nombre);
	}	
}

void ejercicio7(void){
	
	printf("7: Dadas las horas trabajadas por una persona y el valor de la hora, calcular su salario y mostrarlo, teniendo en cuenta que si las horas trabajadas es mayor a 40, el excedente se paga un 50% mas.\n");
	
	float cantHoras, valorHora, ans;
	
	cantHoras=lt_getFloat("\nIngrese la cantidad de horas trabajadas: ");
	valorHora=lt_getFloat("\nIngrese el valor de la hora: ");
	
	ans= cantHoras*valorHora;
	
	if(cantHoras>40)
	{
		ans=((ans-(valorHora*40))*0.5)+ans; 
	}
	printf("\nsu salario total es: $%.2f",ans);					
}

void ejercicio8(void){
	
	printf("8: Dado un tiempo  en minutos, calcular el equivalente en dias, horas y minutos.\n");
	
	int num, dias=0, horas=0, minutos=0, tiempo=lt_getInt("\nIngrese un tiempo en minutos: ");
	
	num=tiempo;
	
	while(tiempo>0)
	{
		if(tiempo>=1140)
		{
			dias++;
			tiempo-=1140;
		}
		else if(tiempo>=60)
		{
			horas++;
			tiempo-=60;
		}
		else
		{
			minutos++;
			tiempo--;
		}
	}
	printf("\n%d minutos son: %d dias, %d horas y %d minutos.",num,dias,horas,minutos);
}

void ejercicio9(void){
	
	printf("9: Escribir los numero del 1 al 100 (usar la estructura PARA.\n");
	
	int i;
	
	for(i=1;i<=100;i++)
	{
		printf("\n%d",i);
	}
}

void ejercicio10(void){
	
	printf("10: Escribir los numeros del 1 al 100 (usar la estructura MIENTRAS).\n");
	
	int i=1;
	
	while(i<=100)
	{
		printf("\n%d",i);
		i++;
	}	
}	
