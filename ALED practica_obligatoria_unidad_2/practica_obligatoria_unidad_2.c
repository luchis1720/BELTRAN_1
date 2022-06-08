#include <stdio.h>
#include <stdlib.h>
#include "ejerciciosUnidad2.h"
#include "fxlt.h"

int main(int argc, char *argv[]) {
	
	int opc, flag;

	lt_begin();
	flag=0; 	//FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	do
	{
		if(flag==0) 	//MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
		{ 
			printf("\nPRACTICA OBLIGATORIA UNIDAD 2");
			printf("\nEJERCICIOS:");
			
			opc=lt_menu("\n\n1: Comprobar si un alumno esta aprobado (si su nota es mayor o igual a 7).\n2: Comprobar si un numero digitado por el usuario es positivo o negativo.\n3: Determinar si un numero es PAR o IMPAR.\n4: Calcular el mayor de 2 números.\n5: Ingrese un número y calcule e imprima su raíz cuadrada. Si el número es negativo imprima el número y un mensaje que diga `tiene raíz imaginaria`.\n6: Ingresar por teclado el nombre, el sexo y la edad de cualquier persona e imprima, solo si la persona es de sexo femenino y mayor de edad, el nombre de la persona.\n7: Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico.\n· 1 - turismo, peaje = $170\n· 2 - autobús, peaje = $400\n· 3 - motocicleta, peaje = $100\n· Caso contrario: vehículo no autorizado.\n8: Ingresar un número entre 1 y 12 y mostrar el nombre del mes al que corresponde ese número.\n9: Dada una nota de un examen mediante un código, escribir el literal que le corresponde a la nota, donde: A = `Excelente` B = `Notable` C = `Aprobado` D y F = `Reprobado`..\n10: Hacer un menú que considere las siguientes opciones:\n· Caso 1: Cubo de un número\n· Caso 2: Número par o impar\n· Caso 3: Salir.\n11:SALIR\n");
			printf("%i",opc);			
			flag=1;		//UNA VEZ ELEGIDA LA OPCION OBLIGO A EJECUTAR EL MENU CON LA OPCION SELECCIONADA		
		}
		if(flag==1) 		//EJECUTO LA OPCION SELECCIONADA EN UN SWITCH
		{
			switch(opc)
			{
							
				case 1: 
					
					system("cls");
					
					ejercicio1();			
					
					flag=0; 							//ACA FUERZO A MOSTRAR EL MENU DE VUELTA YA QUE EL EJERCICIO HA TERMINADO
					lt_continuar();
				break;
					
				case 2: 
					
					system("cls");
					
					ejercicio2();
					
					flag=0;
					lt_continuar();
				break;
					
				case 3: 
					
					system("cls");
					
					ejercicio3();
					
					flag=0;
					lt_continuar();
				break;
					
				case 4: 
					
					system("cls");
					
					ejercicio4();
					
					flag=0;
					lt_continuar();
				break;
					
				case 5: 
					
					system("cls");
					
					ejercicio5();
					
					flag=0;
					lt_continuar();
				break;
					
				case 6: 
					
					system("cls");
					
					ejercicio6();
					
					flag=0;
					lt_continuar();
				break;
					
				case 7: 
					
					system("cls");
					
					ejercicio7();
					
					flag=0;
					lt_continuar();
				break;
					
				case 8: 
					
					system("cls");
					
					ejercicio8();
					
					flag=0;
					lt_continuar();
				break;
					
				case 9: 
					
					system("cls");
					
					ejercicio9();
					
					flag=0;
					lt_continuar();
				break;
					
				case 10: 
					
					system("cls");
					
					ejercicio10();
					
					flag=0;
					lt_continuar();
				break;
					
				case 11: // SALE DEL PROGRAMA 
					
					system("cls");
					
					lt_end();
					
					flag=-1; //ACA FUERZO LA SALIDA DEL DO WHILE PARA QUE TERMINE REALMENTE EL PROGRAMA 
					lt_continuar();
				break;
					
				default: //VALIDACION DE OPCION SELECCIONADA: case invalido!
					
					while(opc<1 || opc>11)	//RANGO DE OPCIONES CORRECTAS
					{
						printf("");
						printf("\nOpcion Invalida, vuelva a intentarlo: ");
						scanf("%i",&opc);
					}
					flag=1; //UNA VEZ INGRESADA UNA OPCION VALIDA, OBLIGO A EJECUTAR DIRECTAMENTE EL SWITCH
				break;
			}
		}
	}while (flag!=-1);	
	
	return 0;
}

