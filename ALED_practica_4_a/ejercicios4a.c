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
#include "ejercicios4a.h"

void ejercicio1(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("1: Crea un programa que escriba los n%cmeros del 10 al 1 (de forma descendente).\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	int i;
	
	for (i=10;i>0;i--)
	{
		printf("%d",i);
		if(i!=1)
		{
			printf(",");
		}
	}
}

void ejercicio2(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("2: Un programa que escriba la secuencia de n%cmeros 2, 4, 6, 8 ... 16.\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	int i;
	
	for (i=2;i<=16;i+=2)
	{
		printf("%d",i);
		if(i!=16)
		{
			printf(",");
		}
	}	
}

void ejercicio3(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("3: Un programa que escriba la secuencia de n%cmeros 6, 5, 4,..., 1.\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	int i;
	
	for (i=6;i>0;i--)
	{
		printf("%d",i);
		if(i!=1)
		{
			printf(",");
		}
	}	
}

void ejercicio4(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("4: Un programa que escriba la secuencia de n%cmeros 3, 5, 7,..., 21.\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	int i;
	
	for (i=3;i<=21;i+=2)
	{
		printf("%d",i);
		if(i!=21)
		{
			printf(",");
		}
	}	
}

void ejercicio5(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("5: Un programa que escriba la secuencia de n%cmeros 12, 10, 8,..., 0.\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	int i;
	
	for (i=12;i>=0;i-=2)
	{
		printf("%d",i);
		if(i!=0)
		{
			printf(",");
		}
	}	
}

void ejercicio6(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("6: Crea un programa que vaya sumando los n%cmeros que el usuario introduzca, y mostrando dicha suma, hasta que introduzca el n%cmero 0, usando 'mientras'.\n",163,163);
	//---------------------------------------------------------------------------------------------------------------------
	float acum=0, num;
	
	num=lt_getFloat("\nIngrese un numero (0 para salir): ");
	
	while(num!=0)
	{
		acum=acum+num;
		num=lt_getFloat("\nIngrese un numero (0 para salir): ");
	}
	printf("\nLa suma de los numeros ingresados es: %.2f",acum);	
}

void ejercicio7(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("7: Crea un programa que escriba en pantalla los n%cmeros del 1 al 10, usando 'mientras'.\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	int i=1;
	
	while(i<=10)
	{
		printf("%d",i);
		if(i!=10)
		{
			printf(",");
		}
		i++;
	}
}

void ejercicio8(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("8: Crea un programa que pida n%cmeros positivos al usuario, y vaya calculando la suma de todos ellos (terminar%c cuando se teclea un n%cmero negativo o cero), usando 'repetir'.\n",163,160,163);
	//---------------------------------------------------------------------------------------------------------------------
	float num, acum=0;
	
	do{	
		num=lt_getFloat("\nIngrese un numero (0 o negativo para salir): ");
		if(num>0)
		{
			acum=acum+num;	
		}	
	}while(num>0);
	
	printf("\nLa suma de los numeros ingresados es: %.2f",acum);		
}

void ejercicio9(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("9: Crea un programa que escriba en pantalla los n%cmeros pares del 26 al 10 (descendiendo), usando 'repetir'\n\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int i=26;
	
	do{
		printf("%d",i);
		
		if(i!=10)
		{
			printf(",");
		}
		
		i-=2;
		
	}while(i>=10);	
}

void ejercicio10(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("10: Crea un programa que pida al usuario su c%cdigo de usuario y su contrase%ca (ambos ser%cn n%cmeros enteros), y no le permita seguir hasta que introduzca como c%cdigo '1000' y como contrase%ca '1234', usando 'repetir'\n",162,164,160,163,162,164);
	//---------------------------------------------------------------------------------------------------------------------
	
	int codUsu,pass;
	
	do{
		codUsu=lt_getInt("\nIngrese su codigo de usuario: ");
		pass=lt_getInt("\Ingrese su contrasena: ");
		
	}while(codUsu!=1000 || pass!=1234);
	
	printf("\nBienvenido usuario: \"%d\"",codUsu);
}


void ejercicio11(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("11: Mejora el programa de la clave de acceso con 'repetir', para que avise si el ingreso no es correcto.\n");
	//---------------------------------------------------------------------------------------------------------------------
	
	int codUsu,pass,flag;
	
	do{
		flag=0; //inicializa la bandera para que en la proxima iteracion vuelva a ver si tiene que mostrar error de contraseña o no
		
		codUsu=lt_getInt("\nIngrese su codigo de usuario: ");
		pass=lt_getInt("\Ingrese su contrasena: ");
		
		if(codUsu!=1000)
		{
			printf("\nERROR, c%cdigo de usuario inv%clido",162,160);
			flag=1; //para que al ya tener el usuario invalido ni siquiera intente ver si la contraseña existe o no.
		}
		if(pass!=1234 && flag==0)
		{
			printf("\nERROR, contrase%ca inv%clido",164,160);
		}
		
	}while(codUsu!=1000 || pass!=1234);
	
	printf("\nBienvenido usuario: \"%d\"",codUsu);
}

void ejercicio12(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("12: Mejora m%cs todav%ca el programa de la clave de acceso con 'repetir', para que s%clo haya tres intentos.\n",160,161,162);
	//---------------------------------------------------------------------------------------------------------------------
	
	int codUsu,pass,flag,contador=0;
	
	do{
		flag=0; //inicializa la bandera para que en la proxima iteracion vuelva a ver si tiene que mostrar error de contraseña o no
		
		codUsu=lt_getInt("\nIngrese su codigo de usuario: ");
		pass=lt_getInt("\Ingrese su contrasena: ");
		
		if(codUsu!=1000 || pass!=1234)
		{
			if(codUsu!=1000)
			{
				printf("\nERROR, c%cdigo de usuario inv%clido",162,160);
				flag=1; //ya que el usuario es inválido ni siquiera intenta ver si la contraseña existe o no.
			}
			if(pass!=1234 && flag==0)
			{
				printf("\nERROR, contrase%ca inv%clido",164,160);
			}
			contador++;			
		}
	}while((codUsu!=1000 || pass!=1234) && (contador!=3));
	
	if (contador==3)
	{
		printf("\n\nN%cmero M%cximo de intentos alcanzado",163,160);
	}
	else
	{
		printf("\nBienvenido usuario: \"%d\"",codUsu);	
	}
	
}

