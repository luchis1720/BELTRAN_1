#include <stdio.h>
#include <stdlib.h>
#include "ejercicios5.h"
#include "fxlt.h"


int main(int argc, char *argv[]) {
	
	int opc, flag;

	lt_begin();
	flag=0; 	//FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	do{
		
		if(flag==0) 	//MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
		{ 
			printf("\nPr%cctica - Unidad N%c 5",160,167);
			printf("\nEJERCICIOS:\n\n");
				
			//ENUNCIADOS------------------------------------------------------------------------------------------------------------
			printf("1: Determinar, mediante una funci%cn, si un n%cmero es par o impar.\n",162,163);
			printf("2: Escriba una funci%cn llamada mult() que acepte dos n%cmeros en punto flotante como par%cmetros, multiplique estos dos n%cmeros y devuelva el resultado.\n",162,163,160,163);
			printf("3: Hacer un programa que muestre un men%c con las opciones sumar, restar, multiplicar y dividir dos n%cmeros. El programa solicitar%c una opci%cn y realizar%c la tarea elegida. Usar procedimientos.\n",163,163,160,162,160);
			printf("4: Escriba una funci%cn llamada cuadrado() que calcule el cuadrado del valor que se le transmite y devuelva el resultado. La funci%cn deber%c ser capaz de elevar al cuadrado n%cmeros flotantes.\n",162,162,160,163);
			printf("5: Escriba una funci%cn llamada funpot() que eleve un n%cmero entero que se le transmita a una potencia entera positiva que tambi%cn se pase como par%cmetro y devuelva el resultado.\n",162,163,130,160);
			printf("6: Hacer un programa que pida una temperatura en grados Celsius, muestre un men%c para convertirla a Fahrenheit o Kelvin y devuelva el resultado, utilizando funciones. (CELCIUS A FAHRENHEIT: F=((9*C)/5)+32 || CELCIUS A KELVIN: K=C+273.15)\n",163);
			printf("7: Hacer una funci%cn que reciba 3 n%cmeros enteros y devuelva el mayor de ellos\n",162,163);
			printf("8: Hacer un programa que muestre 3 n%cmeros ordenados de menor a mayor, utilizando un procedimiento.\n",163);
			printf("9: Escriba una funci%cn que devuelva la parte fraccionaria de cualquier n%cmero introducido por el usuario. Por ejemplo, si se introduce el n%cmero 27.897, deber%ca desplegarse el n%cmero 0.897.\n",162,163,163,161,163);
			printf("10: Hacer un procedimiento que sume y multiplique dos n%cmeros que reciba como argumentos y devuelva ambos resultados.\n",163);
			printf("11: Hacer un procedimiento llamado cambio() que tenga un par%cmetro en n%cmero entero y 10 par%cmetros de referencia en n%cmero entero llamados mil, quinientos, doscientos, cien, cincuenta, veinte, diez, cinco, dos y uno, respectivamente. El procedimiento tiene que considerar el valor entero transmitido como una cantidad en pesos y convertir el valor en el n%cmero menor de billetes equivalentes.\n",160,163,160,163,163);
			printf("12: Escriba un procedimiento llamada tiempo() que tenga un par%cmetro en n%cmero entero llamado totalseg y tres par%cmetros de referencia enteros llamados horas, min y seg. La idea es convertir el n%cmero de segundos transmitido en el equivalente a horas, minutos y segundos.\n",160,163,160,163);
			
			//---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------			
								
			opc=lt_menu("13: SALIR\n");    	//se concatena este string con los anteriores de los enunciados	y se pide una opcion																		
					
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
				
				case 13: // SALE DEL PROGRAMA 					
					system("cls");
					
					lt_end();
					
					flag=-1; //ACA FUERZO LA SALIDA DEL DO WHILE PARA QUE TERMINE REALMENTE EL PROGRAMA 
					lt_continuar();
				break;			
									
				default: //VALIDACION DE OPCION SELECCIONADA: case invalido!
					
					while(opc<1 || opc>13)	//RANGO DE OPCIONES CORRECTAS
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
