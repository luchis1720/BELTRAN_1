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
#include "ejercicios4b.h"

void ejercicio1(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("1: Realizar un programa que pida al usuario un n%cmero y muestre su tabla de multiplicar hasta el 10.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num,i;
	
	
	num=lt_getInt("\nPor favor ingrese un numero, para ver su tabla: ");
	
	for(i=1;i<=10;i++)
	{
		printf("\n%dx%d= %d",num,i,(num*i));
	}
}

void ejercicio2(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("2: Hacer un programa que le pida n%cmeros al usuario hasta que se ingrese el n%cmero 0. En ese momento el programa debe terminar y mostrar la cantidad de n%cmeros mayores a 0 que se han ingresado.\n",163,163,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	float num;
	int contador=0;
	
	do{
		num=lt_getFloat("\nIngrese un numero (0 para terminar): ");
		
		if(num!=0)
		{
			contador++;
		}
		
	}while(num!=0);
	
	printf("\nLa cantidad de numeros ingresados son: %d",contador);	
}

void ejercicio3(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("3: Calcular y mostrar la suma de los cuadrados de los primeros 10 n%cmeros enteros mayores que 0.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
		
	int i,acum=1;
	
	printf("\n1^2");
	
	for(i=2;i<=10;i++)
	{
		printf("+%d^2",i);
		acum=acum+(i*i);
	}
	printf("= %d",acum);
}

void ejercicio4(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("4: Escriba un programa que tome cada 4 horas la temperatura exterior, durante un per%codo de 24 horas. Es decir, se deben leer 6 temperaturas. Calcular la temperatura media del d%ca, la temperatura m%cs alta y la m%cs baja.\n",161,161,160,160);
	//---------------------------------------------------------------------------------------------------------------------
		
	int i, horaMenor,horaMayor;
	float acum=0, tempAct, tempMayor, tempMenor;
	
	srand(time(NULL));
	
	for(i=4;i<=24;i+=4)
	{
		tempAct=rand()%55-10; //ASIGNO UNA TEMPERATURA ACTUAL ALEATORIA
		printf("\nHORA: %d:00\t- TEMPERATURA ACTUAL: %.2f%c",i,tempAct,167); 
		
		if(i==4)
		{
			tempMayor=tempAct;
			tempMenor=tempAct;
			horaMenor=i;
			horaMayor=i;
		}
		if(tempAct>tempMayor)
		{
			tempMayor=tempAct;
			horaMayor=i;
		}
		if(tempAct<tempMenor)
		{
			tempMenor=tempAct;
			horaMenor=i;
		}
		acum=acum+tempAct;
	}					
	printf("\n\nLa temperatura media del dia fue: %.2f%c",(acum/6),167);
	printf("\n\nLa temperatura mas baja del dia fue: %.2f%c a las %d:00 hs.",tempMenor,167,horaMenor);
	printf("\n\nLa temperatura mas alta del dia fue: %.2f%c a las %d:00 hs.",tempMayor,167,horaMayor);		
}

void ejercicio5(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("5: Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.\n");
	//---------------------------------------------------------------------------------------------------------------------
		
	int num,acum=0;
	
	do{
	
		/*printf("\nIngrese un n%cmero ([20a30] o 0 para salir):",163);  
		scanf("%d",&num);
		*/
		num=lt_getFloat("\nIngrese un n%cmero ([20a30] o 0 para salir):"); //trunco decimales por que mi funcion getINT no me toma ingresos de enteros negativos
		
		if((num<=20 || num>=30) && num>0)
		{
			acum=acum+num;
			//printf(" %d",acum); 
		}
		
	}while((num<=20 || num>=30) && num!=0);
	
	printf("\nLa suma de los valores mayores a cero es: %d",acum);		
}

void ejercicio6(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("6: Dise%car un programa que eleve un n%cmero x a un exponente y, sin usar la funci%cn pow().\n",164,163,162);
	//---------------------------------------------------------------------------------------------------------------------
	
	int i, num, exp;
	double base;
	
	num=lt_getInt("\nIngrese un numero a elevar: ");
	exp=lt_getInt("\nIngrese el exponente al que desea elevar: ");
	
	base=num;
	
	for(i=1;i<exp;i++)
	{
		base= base*num;
	}
	
	printf("\nEl resultado de %d elevado a %d es: %.0f",num,exp,base);
}

void ejercicio7(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("7: Escriba un programa que pida un n%cmero n y realice la suma 1+2+3…+n.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num,i,acum=1;
	
	num=lt_getInt("\nIngrese un numero: ");
	
	if(num==0)
	{
		acum=0;
	}
	else
	{
		printf("\n1");
		for(i=2;i<=num;i++)
		{
			printf("+%d",i);
			acum=acum+i;
		}	
	}	
	printf(" = %d",acum);	
}

void ejercicio8(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("8: Escriba un programa que pida un n%cmero n y realice la suma de los n%cmeros impares desde 1 hasta n.\n",163,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num,i,acum=1;
	
	num=lt_getInt("\nIngrese un numero: ");
	
	while(num==0)
	{
		num=lt_getInt("\nERROR, '0' no es un numero valido. Ingrese un numero mayor que cero (0): ");
	}
	
	printf("\n1");
	for(i=2;i<=num;i++)
	{
		if(i%2!=0)
		{
			printf("+%d",i);
			acum=acum+i;	
		}
	}		
	printf(" = %d",acum);						
}

void ejercicio9(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("9: Calcular el factorial de un n%cmero ingresado por teclado.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num,i,acum=1;
	
	num=lt_getInt("\nIngrese un numero: ");
	
	if(num==0) 
	{
		printf("\n(Por definici%cn el factorial de 0 es 1)\n",162); 
	}
	else
	{
		printf("\n%d!: 1",num); // el acum al se de multiplicaion lo inicializo en 1 ya que es neutro y al printear esto no es necesario hacer el for desde 1 sino desde 2. pq 1x1=1.						
		
		for(i=2;i<=num;i++)
		{
			acum=acum*i;
			printf("x%d",i);
		}	
		printf(" = %d",acum);	
	}	
}

void ejercicio10(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("10: Hacer un programa que calcule 1-2+3-4+5-6….+n (donde n se ingresa por teclado).\n");
	//---------------------------------------------------------------------------------------------------------------------
	
	int num,i,acum=1;
	
	num=lt_getInt("\nIngrese un numero: ");
	
	if(num==0)
	{
		printf("\n0 = 0");
	}
	else
	{
		printf("\n1");
		for(i=2;i<=num;i++)
		{
			if(i%2==1)
			{
				acum=acum+i;
				printf("+%d",i);
			}
			if(i%2==0)
			{
				acum=acum-i;
				printf("-%d",i);
			}
		}
		printf(" = %d",acum);
	}
	
}

void ejercicio11(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("11: Escribir un programa que calcule la serie de Fibonacci hasta el n%cmero n (ingresado por teclado).\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num,primNum,segNum,aux,i,acum=1;
	
	printf("\nIngrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num);
	
	while(num<=1)
	{
		printf("\nERROR. Por favor ingrese un n%cmero posterior a la serie de Fibonacci (mayor a 1): ",163);
		fflush(stdin);
		scanf("%d",&num);
	}
	primNum=0;
	segNum=1;
	printf("\nFibonacci: ");
	for(i=1;i<=num;i++)
	{
		if(primNum!=0)
		{
			printf(",%d",primNum); //prolijidad para la escritura de la serie (sino por pantalla arranca con coma la serie)
		}
		else
		{
			printf("%d",primNum);
		}
		aux=primNum+segNum;
		primNum=segNum;
		segNum=aux;
	}	
}

void ejercicio12(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("12: En una clase de 5 alumnos se han realizado tres ex%cmenes y se requiere determinar el n%cmero ",160,163);
	printf("de:\n    -Alumnos que aprobaron todos los ex%cmenes\n    -Alumnos que aprobaron por lo menos un examen\n    -Alumnos que aprobaron %cnicamente el %cltimo examen\n",160,163,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int exam1,exam2,exam3,acum=0;
	
	srand(time(NULL));
	
	exam1=rand()%2;	//asigno al azar resultados examen 1=aprobado, 0=desaprobado
	exam2=rand()%2;
	exam3=rand()%2;
	
	if(exam3==1) //si aprobo este examen lo revalido a valor -3 para difereciarlo (debe ser un numero negativo mayor al maximo positivo obtenido por la cantidad de examenes aprobados)
	{
		exam3=-3;
	}
	
	acum=exam1+exam2+exam3;
	
	switch(acum)	//posibilidades 2 opciones en 3 variables ->  2^3=8
	{
		case -1:	//1+1+-3
			printf("\n Aprobo todos los examenes.");
		break;
		
		case 1:
		case 2:
		case -2: 	//1+1+0 or 1+0+-3 or 0+1+-3 or 1+0+0 or 0+1+0
			printf("\nAprobo al menos un examen.");
		break;
		
		case-3:		//0+0+-3
			printf("\nAprobo solamente el ultimo examen.");
		break;
		
		default:	//0+0+0
			printf("\nDesaprobo todos los examenes.");
		break;			
	}
	
}

void ejercicio13(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("13: Realice un programa que solicite al usuario un n%cmero entre 1 y 100. El programa debe generar un n%cmero aleatorio en ese mismo rango [1-100] e indicarle",163,163); 
	printf("al usuario si el n%cmero que digit%c es menor o mayor al n%cmero aleatorio, hasta que lo adivine. Por %cltimo, deber%c mostrarle el n%cmero de intentos que le llev%c.\n",163,162,163,163,160,163,162);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num, numMaq, contador=1;
	
	printf("\nIngrese un n%cmero entre 1 y 100: ",163);
	fflush(stdin);
	scanf("%d",&num);
	
	while(num<1 || num>100)
	{
		printf("\nERROR. Ingrese un n%cmero entre 1 y 100: ",163);
		fflush(stdin);
		scanf("%d",&num);
	}
	
	srand(time(NULL));
	numMaq=(rand()%100)+1;
		
	while (num!=numMaq)
	{
		if (numMaq>num)
		{
			printf("\nSu numero es \"MENOR\"\n");
		}
		else
		{
			printf("\nSu numero es \"MAYOR\"\n");
		}
		contador++;
		
		printf("\nIngrese un n%cmero entre 1 y 100: ",163);
		fflush(stdin);
		scanf("%d",&num);
	
		while(num<1 || num>100)
		{   
			printf("\nERROR. Ingrese un n%cmero entre 1 y 100: ",163);
			fflush(stdin);
			scanf("%d",&num);
		}
	}
	printf("\n*****************************************************************\n*                                                  \t\t*");
	printf("\n*\t%cEnhorabuena!, has adivinado en \"%d\" intentos\t\t*",173,contador);
	printf("\n*                                                  \t\t*\n*****************************************************************");
}

void ejercicio14(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("14: Hacer un programa que descomponga un n%cmero ingresado por teclado en sus factores primos.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num, i;
	
	printf("\nIngrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num);
	
	while(num<=1)
	{
		printf("\nERROR. Por favor ingrese un n%cmero mayor a 1): ",163);
		fflush(stdin);
		scanf("%d",&num);
	}
	
	printf("\nLos factores primos de %d son",num);
	
	for(i=2;i<=num;i++)
	{
		while(num%i==0)
		{
			printf(", %d",i);
			num=num/i;
		}
	}
}

