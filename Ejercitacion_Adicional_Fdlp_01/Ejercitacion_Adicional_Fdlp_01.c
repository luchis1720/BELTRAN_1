#include <stdio.h>
#include <stdlib.h>
#include "fxlt.h"
#include "ejerciciosAdicional.h"

int main(int argc, char *argv[]) {
	
	int opc, flag;

	lt_begin();
	flag=0; 	//FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	do
	{
		if(flag==0) 	//MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
		{ 
			printf("\nFUNDAMENTOS DE LA PROGRAMACION - 1.Computadoras y programacion - Ejercitacion Adicional");
			printf("\nEJERCICIOS:");
			
			opc=lt_menu("\n\n1: Determinar si un numero es POSITIVO.\n2: Determinar si un numero es POSITIVO, NEGATIVO o CERO.\n3: Determinar si un numero es PAR o IMPAR.\n4: Leer un numero y calcular el 5% del numero leido.\n5: Sumar 2 numeros y mostrar el resultado solo si la suma es mayor a 25. En case contrario mostrar el mensaje `La suma no se mostrara en pantalla`.\n6: Ingresar el nombre y la edad de una persona y mostrar si es mayor o menor de edad.\n7: Dadas las horas trabajadas por una persona y el valor de la hora, calcular su salario y mostrarlo, teniendo en cuenta que si las horas trabajadas es mayor a 40, el excedente se paga un 50% mas.\n8: Dado un tiempo  en minutos, calcular el equivalente en dias, horas y minutos.\n9: Escribir los numero del 1 al 100 (usar la estructura PARA.\n10: Escribir los numeros del 1 al 100 (usar la estructura MIENTRAS).\n11:SALIR\n");
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
						printf("Opcion Invalida, vuelva a intentarlo: ");
						scanf("%i",&opc);
					}
					flag=1; //UNA VEZ INGRESADA UNA OPCION VALIDA, OBLIGO A EJECUTAR DIRECTAMENTE EL SWITCH
				break;
			}
		}
	}while (flag!=-1);	
	
	return 0;
}
