#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <strings.h>
#include <ctype.h>
#include <unistd.h>
#include "ejercicios4a.h"
#include "fxlt.h"


int main(int argc, char** argv) {
	
	int opc, flag;

	lt_begin();
	flag=0; 	//FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	do{
		
		if(flag==0) 	//MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
		{ 
			printf("\nUNIDAD 3: ESTRUCTURAS REPETITIVAS");
			printf("\nEJERCICIOS:");
			
			opc=lt_menu("\n\n1: Crea un programa que escriba los numeros del 10 al 1 (de forma descendente).\n2: Un programa que escriba la secuencia de numeros 2, 4, 6, 8 ... 16.\n3: Un programa que escriba la secuencia de numeros 6, 5, 4,..., 1.\n4: Un programa que escriba la secuencia de numeros 3, 5, 7,..., 21.\n5: Un programa que escriba la secuencia de numeros 12, 10, 8,..., 0.\n6: Crea un programa que vaya sumando los numeros que el usuario introduzca, y mostrando dicha suma, hasta que introduzca el numero 0, usando 'mientras'.\n7: Crea un programa que escriba en pantalla los numeros del 1 al 10, usando 'mientras'\n8: Crea un programa que pida numeros positivos al usuario, y vaya calculando la suma de todos ellos (terminara cuando se teclea un numero negativo o cero), usando 'repetir'.\n9: Crea un programa que escriba en pantalla los numeros pares del 26 al 10 (descendiendo), usando 'repetir'\n10: Crea un programa que pida al usuario su codigo de usuario y su contrasena (ambos seran numeros enteros), y no le permita seguir hasta que introduzca como codigo '1000' y como contrasena '1234', usando 'repetir'\n12: Mejora mas todavia el programa de la clave de acceso con 'repetir', para que solo haya tres intentos.\n13:SALIR\n");
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
