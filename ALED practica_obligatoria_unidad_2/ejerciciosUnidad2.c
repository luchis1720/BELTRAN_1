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
#include "ejerciciosUnidad2.h"



void ejercicio1(void){
	printf("1: Comprobar si un alumno esta aprobado (si su nota es mayor o igual a 7).\n");
	
	int num;
	num=lt_getInt("\nIngrese un numero: ");
	
	if(num>=7)
	{
		printf("El alumno esta aprobado con %d",num);
	}
	else
	{
			printf("El alumno esta desaprobado con %d",num);
	}	
}

void ejercicio2(void){
	printf("2: Comprobar si un n%cmero digitado por el usuario es positivo o negativo.\n",163);
	
	float numero;
	
	numero=lt_getFloat("\nIngrese un numero: ");
	
	if(numero>=0)
	{
		printf("\nEl n%cmero %.2f es \"Positivo\"",163,numero);
	}
	else
	{
		printf("\nEl n%cmero %.2f es \"Negativo\"",163,numero);
	}
}

void ejercicio3(void){
	printf("3: Determinar si un n%cmero es PAR o IMPAR.\n",163);
	
	int num=lt_getInt("\nIngrese un numero: ");
	
	if(num%2==0)
	{
		printf("\nEl n%cmero %d es \"par\"",163,num);
	}
	else
	{
		printf("\nEl n%cmero %d es \"impar\"",163,num);
	}
}

void ejercicio4(void){
	printf("4: Calcular el mayor de 2 n%cmeros.\n",163);
	
	float numero, numero2;
	
	numero=lt_getFloat("\nIngrese un numero: ");
	numero2=lt_getFloat("\nIngrese un numero: ");					
	
	if(numero>numero2)
	{
		printf("\nEl n%cmero %.2f es mayor",163,numero);
	}
	else if (numero2>numero)
	{
		printf("\nEl n%cmero %.2f es menor",163,numero2);
	}
	else
	{
		printf("\nLos n%cmeros son iguales",163);
	}	
}

void ejercicio5(void){
	printf("5: Ingrese un n%cmero y calcule e imprima su raíz cuadrada. Si el n%cmero es negativo imprima el n%cmero y un mensaje que diga `tiene raíz imaginaria`.\n",163,163,163);
	
	float numero=lt_getFloat("\nIngrese un numero: ");
	
	if(numero>=0)
	{
		printf("\nLa raiz cuadrada de %.2f es: %.2f" ,numero, sqrt(numero));
	}
	else
	{
		printf("\nEl numero %.2f tiene raiz imaginaria",numero);
	}
}

void ejercicio6(void){
	printf("6: Ingresar por teclado el nombre, el sexo y la edad de cualquier persona e imprima, solo si la persona es de sexo femenino y mayor de edad, el nombre de la persona.\n");
	
	int edad;
	char nombre[41];
	char sexo;
	lt_getTexto("\nIngrese un nombre: ",nombre,41);
	
	sexo=tolower(sexo=lt_getChar("\nIngrese el genero: "));
	
	while (sexo!='m' && sexo!='f')
	{
		sexo=tolower(sexo=lt_getChar("\nERROR, Ingrese m para masculino o f para femenino: "));
	}
	edad=lt_getInt("\nIngrese la edad de la persona: ");
	
	if(edad>=18 && sexo=='f')
	{
		printf("\nEl nombre de la persona es: %s",nombre);
	}
	else
	{
		printf("\nLa persona no es femenina o es menor de edad");
	}	
}

void ejercicio7(void){
	printf("7: Seleccionar un tipo de vehículo e indicar el peaje a pagar seg%cn un valor num%crico.\n· 1 - turismo, peaje = $170\n· 2 - autob%cs, peaje = $400\n· 3 - motocicleta, peaje = $100\n· Caso contrario: veh%cculo no autorizado\n",163,130,163,161);
	
	int vehiculo;
	
	vehiculo=lt_getInt("\nIngrese el tipo de vehiculo:\n1.-turismo\n2.-autobus\n3.-motocicleta  ");
	/*while(vehiculo!=1 && vehiculo!=2 && vehiculo!=3)
	{
		vehiculo=lt_getInt("\nERROR, Presione 1 para TURISMO, presione 2 para AUTOBUS o 3 para MOTOCICLETA");	
	}*/
	
	switch(vehiculo)
	{
		case 1:
			printf("\nDebe pagar $170 de peaje");
		break;
		case 2:
			printf("\nDebe pagar 400 de peaje");
		break;
		case 3:
			printf("\nDebe pagar $100 de peaje");
		break;
		default:
			printf("\nVehiculo no autorizado");
			/*sleep(3);
			continue;*/
	}
}

void ejercicio8(void){
	printf("8: Ingresar un n%cmero entre 1 y 12 y mostrar el nombre del mes al que corresponde ese n%cmero.\n",163,163);
	
	int mes;
	mes=lt_getInt("\nIngrese un numero de mes: ");
	switch(mes)
	{
		case 1:
			printf("\nEnero");
		break;
		
		case 2:
			printf("\nFebrero");
		break;
		
		case 3:
			printf("\nMarzo");
		break;
		
		case 4:
			printf("\nAbril");
		break;
		
		case 5:
			printf("\nMayo");
		break;
		
		case 6:
			printf("\nJunio");
		break;
		
		case 7:
			printf("\nJulio");
		break;
		
		case 8:
			printf("\nAgosto");
		break;
		
		case 9:
			printf("\nSeptiembre");
		break;
		
		case 10:
			printf("\nOctubre");
		break;
		
		case 11:
			printf("\nNoviembre");
		break;
		
		case 12:
			printf("\nDiciembre");
		break;
		
		default:
			printf("\nNo es un n%cmero valido de mes",163);
		sleep(3);
		break;
	}	
}

void ejercicio9(void){
	printf("9: Dada una nota de un examen mediante un c%cdigo, escribir el literal que le corresponde a la nota, donde: A = `Excelente` B = `Notable` C = `Aprobado` D y F = `Reprobado`.\n",162);
	
	char nota;
	
	nota=tolower(nota=lt_getChar("\nIngrese una nota: \nA\nB\nC\nD\nF\n\nNOTA: "));
	
	switch (nota)
	{
		case 'a':
			printf("\nEXCELENTE");
		break;
		case 'b':
			printf("\nNOTABLE");
		break;
		case 'c':
			printf("\nAPROBADO");
		break;
		case 'd':
		case 'f':
			printf("\nREPROBADO");
		break;
		default:
			printf("\nLa nota ingresada es inv%clida",160);
		//continue;	
	}
}

void ejercicio10(void){
	printf("10: Hacer un men%c que considere las siguientes opciones:\n· Caso 1: Cubo de un n%cmero\n· Caso 2: N%cmero par o impar\n· Caso 3: Salir.\n",163,163,163);
	
	float ans, numero;
	int num, opc=lt_menu("\n1.-Cubo de un numero\n2.-Numero par o impar\n3.-Salir\n");
		
	switch(opc)
	{
		case 1:
			
			numero=lt_getFloat("\nIngrese un numero: ");
			ans=numero*numero*numero;
			
			printf("\nEl cubo de %.2f es: %.2f",numero,ans);
		break;
		case 2:
			
			num=lt_getInt("\nIngrese un numero: ");
			if(num%2==0.0)
			{
				printf("\nEl n%cmero %d es \"par\"",163,num);
			}
			else
			{
				printf("\nEl n%cmero %d es \"impar\"",163,num);
			}					
		break;
		case 3:
			printf("\nADIOS");
		break;
		default:
			printf("\nOpci%cn inv%clida.",162,160);
		//sleep(3);
		break;
	}	
}
