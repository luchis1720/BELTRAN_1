#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <strings.h>

// A FINES PRACTICOS LAS VARIABLES SE FUERON DECLARANDO EN LAS OPCIONES DEL SWITCH, POR MAS QUE ESTO FUESE UNA MALA PRACTICA.


//FUNCIONES(header)*********************************************************************************************************************************************************

void lt_continuar();					//FUNCION QUE CONGELA EL PROGRAMA Y PIDE UNA TECLA PARA CONTINUAR (ademas limpia la pantalla).
int lt_menu(char cadenas_del_menu[]);	//IMPRIME POR PANTALLA LAS OPCIONES DEL MENU Y TE DEJA ELEGIR UNA.
int lt_getInt(char cadena_a_mostrar[]);	//solicita un numero entero al usuario y devuelve el resultado.
float lt_getFloat (char cadena_a_mostrar[]);	//Solicita un numero flotante al usuario y devuelve su resultado.
int lt_validarEnteros(char cadena[]);	//VALIDA QUE EL NUMERO INGRESADO SEA UN ENTERO.
int lt_validarFlotantes(char cadena[]);	//Valida que el numero ingresado sea un flotante.
int lt_contadorCadena(char cadena[]);	//cuenta simbolos en una cadena de texto.
int lt_allowNeg(char cadena[]);			//cuenta simbolos negativos en una cadena de texto.


//***************************************************************************************************************************************************************************

int main () 
{
	//DEFINICIONES***********************************************************************************************************************************************************
	int opc, flag, num;
	//***********************************************************************************************************************************************************************
	
	printf("\n*************************************************************\n*\t\t\t\t\t\t\t    *\n* Luis A. Ton");
    printf("cic  DNI:33.655.967  leg:9923  div: 1ro_1raTM  *\n*\t\t\t\t\t\t\t    *\n*\t ===== \t\t    ALED 1 \t\t ");
    printf("=====\t    *\n*\t\t\t\t\t\t\t    *\n*************************************************************\n");
	flag=0; 																//FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	//PROGRAMA***************************************************************************************************************************************************************
	do
	{
		if(flag==0) 	//MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
		{ 
			printf("\nFUNDAMENTOS DE LA PROGRAMACION - 1.Computadoras y programacion - Ejercitacion Adicional");
			printf("\nEJERCICIOS:");
			
			opc=lt_menu("\n\n1: Crea un programa que calcule la suma de 23 y 38.\n2: Crea un programa que muestre la operación 1234 + 5486 y su resultado.\n3: Crea un programa que calcule la multiplicación de 12345 por 98765\n4: Crea un programa que muestre el resultado de dividir 12345 entre 974.\n5: Crea un programa que defina una variable llamada `numero1` y otra llamada `numero2`. La primera tendrá el valor 14 y la segunda el valor 37. Guarda su multiplicación en una variable llamada `producto` y luego muestra el valor de dicha multiplicación en pantalla.\n6: Crea una variable `n`, que tenga el valor 123, y muestra el valor de la variable en pantalla. Ahora cambia su valor por 145 y comprueba que realmente se ha modificado. Finalmente, muestra el resultado de multiplicar esa variable por 7.\n7:Crea un programa que pida dos números enteros y muestre su suma, usando variables llamadas `n1`, `n2` y `suma`.\n8: Crea un programa que pida dos números enteros y muestre su suma, diferencia, producto, división del primero entre el segundo, y división del segundo entre el primero, usando dos variables llamadas `primerNumero` y `segundoNumero`.\n9: Pide dos números al usuario y el resto de dicha división. Usa los nombres de variables que quieras.\n10: Crea un programa que pida al usuario la cantidad de habitantes de su país y cantidad de provincias o estados. A partir de esos datos calculará una estimación de la cantidad media de habitantes en cada provincia o estado. Finalmente mostrará ese resultado en pantalla. Debe usar los tipos de datos más adecuados.\n11: Crea un programa que te pida dos números reales y muestre en pantalla el resultado de multiplicarlos.\n12: Pide al usuario dos números reales y muestra en pantalla el resultado de su división.\n13: Crea un programa que convierta de kilómetros a millas, usando la equivalencia 1 milla = 1619 metros.\n14: Pide un número y calcula su cuarta potencia.\n15: Crea un programa que genere un número al azar entre 1 y 20 (ambos incluidos).\n16: Crea un programa que genere un número al azar entre 100 y 500 (ambos incluidos).\n17:SALIR\n");
			printf("%i",opc);			
			flag=1;		//UNA VEZ ELEGIDA LA OPCION OBLIGO A EJECUTAR EL MENU CON LA OPCION SELECCIONADA		
		}
		if(flag==1) 		//EJECUTO LA OPCION SELECCIONADA EN UN SWITCH
		{
			switch(opc)
			{
							
				case 1: 
					
					system("cls");
					printf("1: Crea un programa que calcule la suma de 23 y 38.\n");
					
					printf("\n23 + 38 = %d",(23+38));
					
					flag=0; 							//ACA FUERZO A MOSTRAR EL MENU DE VUELTA YA QUE EL EJERCICIO HA TERMINADO
					lt_continuar();
				break;
					
				case 2: 
					
					system("cls");
					printf("2: Crea un programa que muestre la operación 1234 + 5486 y su resultado.\n");
					
					printf("\n1234 + 5486 = %d",(1234+5486));
					
					flag=0;
					lt_continuar();
				break;
					
				case 3: 
					
					system("cls");
					printf("3: Crea un programa que calcule la multiplicación de 12345 por 98765.\n");
					
					printf("12345 * 98765 = %d",(12345*98765));
					
					flag=0;
					lt_continuar();
				break;
					
				case 4: 
					
					system("cls");
					printf("4: Crea un programa que muestre el resultado de dividir 12345 entre 974.\n");
					
					//fflush(stdin);
					printf("12345 / 974 = %f",(12345.0/974.0));
					
					flag=0;
					lt_continuar();
				break;
					
				case 5: 
					
					system("cls");
					printf("5: Crea un programa que defina una variable llamada `numero1` y otra llamada `numero2`. La primera tendrá el valor 14 y la segunda el valor 37. Guarda su multiplicación en una variable llamada `producto` y luego muestra el valor de dicha multiplicación en pantalla.\n");
					
					int numero1=14;
					int numero2=37;
					int producto= numero1*numero2;
					
					printf("%d x %d = %d",numero1,numero2,producto);
					
					flag=0;
					lt_continuar();
				break;
					
				case 6: 
					
					system("cls");
					printf("6: Crea una variable `n`, que tenga el valor 123, y muestra el valor de la variable en pantalla. Ahora cambia su valor por 145 y comprueba que realmente se ha modificado. Finalmente, muestra el resultado de multiplicar esa variable por 7.\n");
					
					int n=123;
					printf("\nn ahora vale: %d",n);
					n=145;
					printf("\nn ahora vale: %d",n);
					n=145*7;
					printf("\nn ahora vale: %d",n);
					
					flag=0;
					lt_continuar();
				break;
					
				case 7: 
					
					system("cls");
					printf("7:Crea un programa que pida dos números enteros y muestre su suma, usando variables llamadas `n1`, `n2` y `suma`.\n");
					
					int n1, n2, suma=0;
					
					n1=lt_getInt("\nINGRESE UN NUMERO:");
					n2=lt_getInt("\nINGRESE OTRO NUMERO:");
					suma= n1+n2;
					printf("\ningreso %d y %d y su suma es: %d",n1,n2,suma);
					
					flag=0;
					lt_continuar();
				break;
					
				case 8: 
					
					system("cls");
					printf("8: Crea un programa que pida dos números enteros y muestre su suma, diferencia, producto, división del primero entre el segundo, y división del segundo entre el primero, usando dos variables llamadas `primerNumero` y `segundoNumero`.\n");
					
					
					int resta;
					float primerNumero, segundoNumero, division1, division2;
					
					primerNumero=lt_getFloat("\nINGRESE UN NUMERO:");
					segundoNumero=lt_getFloat("\nINGRESE OTRO NUMERO:");
					
					suma= primerNumero+segundoNumero;
					resta= primerNumero-segundoNumero;
					producto=primerNumero*segundoNumero;
					division1=primerNumero/segundoNumero;
					division2=segundoNumero/primerNumero;
					
					printf("\nSUMA= %d | RESTA= %d | PRODUCTO= %d | DIVISION 1 con 2= %.2f | DIVISION 2 con 1= %.2f",suma,resta,producto,division1,division2);
					
					flag=0;
					lt_continuar();
				break;
					
				case 9: 
					
					system("cls");
					printf("9: Pide dos números al usuario y el resto de dicha división. Usa los nombres de variables que quieras.\n");
					
					int resto;
					
					n1=lt_getInt("\nINGRESE UN NUMERO: ");
					n2=lt_getInt("\nINGRESE OTRO NUMERO");
					resto= n1%n2;
					
					printf("\nel resto de %d y %d es %d",n1,n2,resto);
					
					flag=0;
					lt_continuar();
				break;
					
				case 10: 
					
					system("cls");
					printf("10: Crea un programa que pida al usuario la cantidad de habitantes de su país y cantidad de provincias o estados. A partir de esos datos calculará una estimación de la cantidad media de habitantes en cada provincia o estado. Finalmente mostrará ese resultado en pantalla. Debe usar los tipos de datos más adecuados.\n");
					
					int habPais;
					float promProv, estados;
					
					habPais=lt_getInt("\nIngrese la cantidad de habitantes de su pais: ");
					estados=lt_getFloat("\nIngrese la cantidad de Provincias: ");
					
					promProv= habPais/estados;
					
					printf("la cantidad estimada de habitantes por provincia de su pais es: %.0f",promProv);
					
					flag=0;
					lt_continuar();
				break;
					
				case 11: 
					
					
					system("cls");
					printf("11: Crea un programa que te pida dos números reales y muestre en pantalla el resultado de multiplicarlos.\n");
					
					float multi;
					primerNumero=lt_getFloat("\nINGRESE UN NUMERO:");
					segundoNumero=lt_getFloat("\nINGRESE OTRO NUMERO:");
					
					multi=primerNumero*segundoNumero;
					
					printf("la multiplicacion de %.3f x %.3f = %.3f",primerNumero,segundoNumero,multi);
					
					flag=0;
					lt_continuar();
				break;
				
				case 12: 
					
					system("cls");
					printf("12: Pide al usuario dos números reales y muestra en pantalla el resultado de su división.\n");
					
					primerNumero=lt_getFloat("\nINGRESE UN NUMERO:");
					segundoNumero=lt_getFloat("\nINGRESE OTRO NUMERO:");
					
					division1=primerNumero/segundoNumero;
					
					printf("la division de %.3f x %.3f = %.3f",primerNumero,segundoNumero,division1);
					
					flag=0;
					lt_continuar();
				break;
				
				case 13: 
										
					system("cls");
					printf("13: Crea un programa que convierta de kilómetros a millas, usando la equivalencia 1 milla = 1609 metros.\n");
					
					float kilometros=lt_getFloat("\nIngrese la cantidad de millas que quiere convertir a millas: ");
					
					printf("\n%.3f Kilometros son: %.3f Millas",kilometros,(kilometros/1.609));
					
					flag=0;
					lt_continuar();
				break;
				
				case 14: 
										
					system("cls");
					printf("14: Pide un número y calcula su cuarta potencia.\n");
					
					
					double num1;
					printf("\nIngrese un numero que desea elevar a la cuarta potencia: ");
					scanf("%lf", &num1);
					
					printf("\n%.2lf ^4 es: %.2lf", num1, pow(num1,4)); //es LF aunque parezca 1F . el double en scanf se lee %LF es decir %lf
					
					flag=0;
					lt_continuar();
				break;
				
				case 15: 
										
					system("cls");
					printf("15: Crea un programa que genere un número al azar entre 1 y 20 (ambos incluidos).\n");
					
					srand(time(NULL));
					printf("\n%d",(rand() % 20 )+1);
										
					flag=0;
					lt_continuar();
				break;
				
				case 16: 
										
					system("cls");
					printf("16: Crea un programa que genere un número al azar entre 100 y 500 (ambos incluidos).\n");
					
					printf("\n%d",(rand() % 401 )+100);
					
					flag=0;
					lt_continuar();
				break;
				
				case 17: // SALE DEL PROGRAMA 
					
					system("cls");
					
					printf("\n*************************************************************\n*\t\t\t\t\t\t\t    *\n*\t=============\t  GRACI");
					printf("AS!!\t=============       *\n*\t\t\t\t\t\t\t    *\n*************************************************************\n");
					
					flag=-1; //ACA FUERZO LA SALIDA DEL DO WHILE PARA QUE TERMINE REALMENTE EL PROGRAMA 
					lt_continuar();
				break;
					
				default: //VALIDACION DE OPCION SELECCIONADA: case invalido!
					
					while(opc<1 || opc>17)	//RANGO DE OPCIONES CORRECTAS
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
}


//FUNCIONES*****************************************************************************************************************************************************************

void lt_continuar(){ 
		printf("\n\n");		
		system("pause");
		system("cls");
}
int lt_menu (char cadenas_del_menu[]){ 	
	int choice;
	printf("%s", cadenas_del_menu);
	choice=lt_getInt("\nElija una opcion: ");
	return choice;
}
int lt_getInt(char cadena_a_mostrar[]){ 	

    int validInt, entero, letras;
    char auxiliar[128];
    char numero[6];
    printf("%s", cadena_a_mostrar);
    scanf("%s", auxiliar);

    validInt = lt_validarEnteros(auxiliar);
    letras= strlen(auxiliar);

    while (validInt!=0 || letras>5)
    {
        printf("ERROR. n%cmero inv%clido... reintente por favor\n",163,160); //ascii de "u" con tilde y "a" con tilde
        printf("%s", cadena_a_mostrar);
        scanf("%s",auxiliar);
        validInt = lt_validarEnteros(auxiliar);
        letras= strlen(auxiliar);
    }
    strcpy(numero, auxiliar);
    entero= atoi(numero);

    return entero;
}
float lt_getFloat (char cadena_a_mostrar[])
{
    int validF, letras;
    float flotante;
    char numero[21];

    printf("%s", cadena_a_mostrar);
    scanf("%s", numero);

    letras = strlen(numero);
    validF = lt_validarFlotantes(numero);

    while (validF!=0 || letras>20)
    {
        printf("ERROR. el numero no puede contener letras, ni s%cmbolos a excepci%cn del punto (coma)... reintente por favor\n",161, 162);
        printf("%s", cadena_a_mostrar);
        scanf("%s",numero);
        validF = lt_validarFlotantes(numero);
    }
    flotante = atof(numero);
    //printf("en func %.3f\n ",flotante);

    return flotante;
}
//***************************************************************************************************************************************************************************


//VALIDACIONES***************************************************************************************************************************************************************
int lt_validarEnteros(char cadena[]) 	
{
    int i, max, ans;
    max=strlen(cadena);

    for(i=0; i<max; i++ )
    {
        if (cadena[i] >= '0' && cadena[i] <= '9')
        {
            ans=0;
        }
        else
        {
            ans=1;
            break;
        }
    }
    return ans;
}
int lt_validarFlotantes(char cadena[])
{
    int i, max, ans;
    int contpuntos,neg;

    contpuntos = lt_contadorCadena(cadena);
    neg= lt_allowNeg(cadena);
    max=strlen(cadena);

    for(i=0; i<max; i++ )
    {
        if ((contpuntos==1) && (neg==1) && ((cadena[i]=='.')||(cadena[i] >= '0' && cadena[i] <= '9')||(cadena[i]=='-')))
        {
            ans=0;
        }
        else
        {
            ans=1;
            break;
        }
    }
    return ans;
}
int lt_contadorCadena(char cadena[]) //valid del validfloat
{
    int i, max, ans;
    int contadorpuntos=0;

    max=strlen(cadena);

    for(i=0; i<max; i++ )
    {
        if(cadena[i]=='.')
        {
            contadorpuntos++;
        }
    }
    if(contadorpuntos==1 || contadorpuntos==0)
    {
        ans=1;
    }
    else
    {
        ans=0;
    }

    return ans;
}
int lt_allowNeg(char cadena[]) //valid del validfloat
{
    int ans,i,max;
    int esnegativo=0,flag=0;

    max=strlen(cadena);

    if(cadena[0]=='-')
    {
        esnegativo++;
        flag=1;
    }

    for(i=1; i<max; i++)
    {
        if(cadena[i]=='-')
            esnegativo++;
    }

    if((esnegativo==1 && flag==1 )|| esnegativo==0)
    {
        ans=1;
    }
    else
    {
        ans=0;
    }

    return ans;
}

//***************************************************************************************************************************************************************************


