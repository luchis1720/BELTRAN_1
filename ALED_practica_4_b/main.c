#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#include <ctype.h>
#include <unistd.h>
#include "ejercicios4b.h"
#include "fxlt.h"


int main(int argc, char *argv[]) {
	
	int opc, flag;

	lt_begin();
	flag=0; 	//FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	do{
		
		if(flag==0) 	//MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
		{ 
			printf("\nPR%cCTICA OBLIGATORIA UNIDAD 4",181);
			printf("\nEJERCICIOS:\n\n");
				
			//ENUNCIADOS------------------------------------------------------------------------------------------------------------
			printf("1: Realizar un programa que pida al usuario un n%cmero y muestre su tabla de multiplicar hasta el 10.\n",163);
			printf("2: Hacer un programa que le pida n%cmeros al usuario hasta que se ingrese el n%cmero 0. En ese momento el programa debe terminar y mostrar la cantidad de n%cmeros mayores a 0 que se han ingresado.\n",163,163,163);
			printf("3: Calcular y mostrar la suma de los cuadrados de los primeros 10 n%cmeros enteros mayores que 0.\n",163);
			printf("4: Escriba un programa que tome cada 4 horas la temperatura exterior, durante un per%codo de 24 horas. Es decir, se deben leer 6 temperaturas. Calcular la temperatura media del d%ca, la temperatura m%cs alta y la m%cs baja.\n",161,161,160,160);
			printf("5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.\n");
			printf("6: Dise%car un programa que eleve un n%cmero x a un exponente y, sin usar la funci%cn pow().\n",164,163,162);
			printf("7: Escriba un programa que pida un n%cmero n y realice la suma 1+2+3…+n.\n",163);
			printf("8: Escriba un programa que pida un n%cmero n y realice la suma de los n%cmeros impares desde 1 hasta n.\n",163,163);
			printf("9: Calcular el factorial de un n%cmero ingresado por teclado.\n",163);
			printf("10: Hacer un programa que calcule 1-2+3-4+5-6….+n (donde n se ingresa por teclado).\n");
			printf("11: Escribir un programa que calcule la serie de Fibonacci hasta el n%cmero n (ingresado por teclado).\n",163);
			printf("12: En una clase de 5 alumnos se han realizado tres ex%cmenes y se requiere determinar el n%cmero ",160,163);
			printf("de:\n    -Alumnos que aprobaron todos los ex%cmenes\n    -Alumnos que aprobaron por lo menos un examen\n    -Alumnos que aprobaron %cnicamente el %cltimo examen\n",160,163,163);
			printf("13: Realice un programa que solicite al usuario un n%cmero entre 1 y 100. El programa debe generar un n%cmero aleatorio en ese mismo rango [1-100] e indicarle",163,163); 
			printf("al usuario si el n%cmero que digit%c es menor o mayor al n%cmero aleatorio, hasta que lo adivine. Por %cltimo, deber%c mostrarle el n%cmero de intentos que le llev%c.\n",163,162,163,163,160,163,162);
			printf("14: Hacer un programa que descomponga un n%cmero ingresado por teclado en sus factores primos.\n",163);	
			//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------			
								
			opc=lt_menu("15: SALIR\n");    	//se concatena este string con los anteriores de los enunciados	y se pide una opcion																		
					
			flag=1;		//UNA VEZ ELEGIDA LA OPCION OBLIGO A EJECUTAR EL MENU CON LA OPCION SELECCIONADA		
		}
		if(flag==1) 		//EJECUTO LA OPCION SELECCIONADA EN UN SWITCH
		{
			switch(opc)
			{							
				case 1: 	
					system("cls");	
									
					ejercicio1();
				
					flag=0; 	 		//ACA FUERZO A MOSTRAR EL MENU DE VUELTA YA QUE EL EJERCICIO HA TERMINADO
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
				
				case 11:  	
					system("cls");	
										
					ejercicio11();
				
					flag=0; 							
					lt_continuar();
				break;
				
				case 12:  	
					system("cls");	
										
					ejercicio12();
				
					flag=0; 							
					lt_continuar();
				break;
				
				case 13:  	
					system("cls");	
										
					ejercicio13();
				
					flag=0; 							
					lt_continuar();
				break;
				
				case 14:  	
					system("cls");	
										
					ejercicio14();
				
					flag=0; 							
					lt_continuar();
				break;
				
				case 15: // SALE DEL PROGRAMA 					
					system("cls");
					
					lt_end();
					
					flag=-1; //ACA FUERZO LA SALIDA DEL DO WHILE PARA QUE TERMINE REALMENTE EL PROGRAMA 
					lt_continuar();
				break;			
									
				default: //VALIDACION DE OPCION SELECCIONADA: case invalido!
					
					while(opc<1 || opc>15)	//RANGO DE OPCIONES CORRECTAS
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
