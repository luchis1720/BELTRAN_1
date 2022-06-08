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
#include "ejercicios5.h"

//PROTOTIPO  FUNCIONES DE LOS EJERCICIOS ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//--------------ej1----------------------
char parImpar(int n);
//---------------------------------------

//--------------ej2----------------------
float mult(float op1,float op2);
//---------------------------------------

//--------------ej3----------------------
float suma (float op1,float op2);
float resta (float op1,float op2);
float multiplicacion (float op1,float op2);
double division (float op1,float op2);
//---------------------------------------

//--------------ej4----------------------
float cuadrado(float num);
//---------------------------------------

//--------------ej5----------------------
int funpot(int base, int potencia);
//---------------------------------------

//--------------ej6----------------------
float celToFahr(float grades);
float celToKelv(float grades);
//---------------------------------------

//--------------ej7----------------------
int funcMayor(int op1, int op2, int op3);
//---------------------------------------

//--------------ej8----------------------
void funcOrdenarMinToMaxSinArray(float num1,float num2,float num3);
//---------------------------------------

//--------------ej9----------------------
double funcFraccionaria(double number);
//---------------------------------------

//--------------ej10---------------------
int sumaYMultiplicacion (float op1, float op2, float *suma, float *mult);
//---------------------------------------

//--------------ej11---------------------
int cambio(long int operador,int *mil, int *quinientos, int *doscientos, int *cien, int *cincuenta, int *veinte, int *diez, int *cinco, int *dos, int *uno);
//---------------------------------------

//--------------ej12---------------------
int tiempo(long int totalSeg, int *horas, int *minutos, int *segundos);
//---------------------------------------

//------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

void ejercicio1(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("1: Determinar, mediante una funci%cn, si un n%cmero es par o impar.\n",162,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num;
	
	printf("ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d", &num);
	
	if(parImpar(num)=='p')
	{
		printf("El n%cmero %d es PAR",163, num);
	}
	else
	{
		printf("El n%cmero %d es IMPAR",163, num);
	}
}

void ejercicio2(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("2: Escriba una funci%cn llamada mult() que acepte dos n%cmeros en punto flotante como par%cmetros, multiplique estos dos n%cmeros y devuelva el resultado.\n",162,163,160,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	float num1,num2;
	
	printf("ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%f", &num1);
	printf("ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%f", &num2);
		
	printf("El resultado es: %.3f",mult(num1,num2));
		
}

void ejercicio3(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("3: Hacer un programa que muestre un men%c con las opciones sumar, restar, multiplicar y dividir dos n%cmeros. El programa solicitar%c una opci%cn y realizar%c la tarea elegida. Usar procedimientos.\n",163,163,160,162,160);
	//---------------------------------------------------------------------------------------------------------------------
	
	int opcion;
    float a, b;
    float resultado;

    do
    {
        system("cls");

        printf("\n=============**CALCULADORA**=============\n");
        printf("  1- Ingresar 1er operando (A=%f)\n", a);
        printf("  2- Ingresar 2do operando (B=%f)\n", b);
        printf("  3- Calcular la suma (A+B)\n");
        printf("  4- Calcular la resta (A-B)\n");
        printf("  5- Calcular la divisi%cn (A/B)\n",162);
        printf("  6- Calcular la multiplicaci%cn (A*B)\n",162);
        printf("  7- Calcular todas las operaciones\n");
        printf("  8- Salir\n");
        printf("=========================================\n");

        fflush(stdin);
        scanf("%d",&opcion);

        while(!(opcion >0 && opcion < 9))
        {
            printf("ERROR. ingrese una opci%cn valida (1 - 8):",162);
            scanf("%d",&opcion);
        }

        switch(opcion)
        {
        case 1:
            printf("ingrese un n%cmero: ",163);
            scanf("%f", &a);
            break;
        case 2:
            printf("ingrese un n%cmero: ",163);
            scanf("%f", &b);
			break;
        case 3:
            resultado= suma (a, b);
            printf("\n___________________________________\n");
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny la suma es: %.3f\n",a,b, resultado);
            printf("____________________________________\n\n");
            lt_continuar();
			break;
        case 4:
            resultado= resta (a, b);
            printf("\n___________________________________\n");
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su resta es: %.3f\n",a,b, resultado);
            printf("_____________________________________\n\n");
            lt_continuar();
			break;
        case 5:
            resultado= division (a, b);
            if(resultado != 0)
            {
                printf("\n___________________________________\n");
                printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su divisi%cn es: %.3f\n",a,b,162, resultado);
                printf("____________________________________\n\n");
            }
            else
            {
                printf("\n___________________________________\n");
                printf("\nERROR (no se puede dividir por cero, reintente por favor)");
                printf("\n___________________________________\n\n");
            }
            lt_continuar();
			break;
        case 6:
            resultado= multiplicacion (a, b);
            printf("\n___________________________________\n");
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su multiplicaci%cn es: %.3f\n",a,b,162, resultado);
            printf("\n___________________________________\n");
            lt_continuar();
			break;
        case 7:
            printf("\n___________________________________\n");
            resultado= suma (a,b);
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny la suma es: %.3f",a,b, resultado);
            printf("\n___________________________________\n");
            resultado= resta (a, b);
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su resta es: %.3f",a,b, resultado);
            printf("\n___________________________________\n");
            resultado= division (a, b);
            if(resultado != 0.0)
            {
                printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su divisi%cn es: %.3f",a,b,162, resultado);
            }
            else
            {
                printf("\nERROR (no se puede dividir por cero, reintente por favor)");
            }
            printf("\n___________________________________\n");
            resultado= multiplicacion (a, b);
            printf("\nel primer operando es: %f \nel segundo operando es: %f \ny su multiplicaci%cn es: %.3f\n",a,b,162, resultado);
            printf("\n___________________________________\n");
            lt_continuar();
			break;
        }
    }
    while(opcion != 8 );

    printf("\n=============\n");
    printf("  gracias!! ");
    printf("\n=============\n");
}
	
void ejercicio4(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("4: Escriba una funci%cn llamada cuadrado() que calcule el cuadrado del valor que se le transmite y devuelva el resultado. La funci%cn deber%c ser capaz de elevar al cuadrado n%cmeros flotantes.\n",162,162,160,163);
	//---------------------------------------------------------------------------------------------------------------------
			
	float num;
		
	printf("Ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%f",&num);
	
	printf("El cuadrado es: %.3f",cuadrado(num));
		
}

void ejercicio5(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("5: Escriba una funci%cn llamada funpot() que eleve un n%cmero entero que se le transmita a una potencia entera positiva que tambi%cn se pase como par%cmetro y devuelva el resultado.\n",162,163,130,160);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num, exp;
		
	printf("Ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num);
	
	printf("Ingrese la potencia a la cual elevar: ",163);
	fflush(stdin);
	scanf("%d",&exp);
	
	printf("El n%cmero %d%c%d= %d ",163,num,94,exp,funpot(num,exp));
	
	
	
}

void ejercicio6(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("6: Hacer un programa que pida una temperatura en grados Celsius, muestre un men%c para convertirla a Fahrenheit o Kelvin y devuelva el resultado, utilizando funciones. (CELCIUS A FAHRENHEIT: F=((9*C)/5)+32 || CELCIUS A KELVIN: K=C+273.15)\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int opc;
	float grados=0;
	
	do{
		system("cls");
		printf("\n1.-Ingresar temperatura (T=%.2f%cC)\n",grados,167);
		opc=lt_menu("2.-Convertir a grados Fahrenheit.\n3.-Convertir a grados Kelvin.\n4.-Salir\n");
		while(!(opc>0 && opc<5))
        {
            printf("\nERROR. ingrese una opci%cn valida (1 - 4): ",162);
            scanf("%d",&opc);
        }
		
			
		switch(opc)
		{							
			case 1: 
				grados=lt_getFloat("\nIngrese la temperatura en grados Celcius: ");
				break;
			case 2: 	
				system("cls");	
								
				printf("\nLa temperatura %.2f%cC en grados Fahrenheit es: %.2f%cF",grados,167,celToFahr(grados),167);
			
				lt_continuar();
			break;	
			case 3: 	
				system("cls"); 	
							
				printf("\nLa temperatura %.2f%cC en grados Kelvin es: %.2f%cK",grados,167,celToKelv(grados),167);
			
				lt_continuar();
			break;
		}
	}while(opc != 4 );
    
    printf("\n=============\n");
    printf("  gracias!! ");
    printf("\n=============\n");    
}

void ejercicio7(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("7: Hacer una funci%cn que reciba 3 n%cmeros enteros y devuelva el mayor de ellos\n",162,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	int num1, num2, num3;
	
	printf("Ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num1);
	printf("\nIngrese un segundo n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num2);
	printf("\nIngrese un tercer n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num3);
	
	printf("\nEl mayor n%cmero de los ingresados es: %d",163,funcMayor(num1,num2,num3));
}

void ejercicio8(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("8: Hacer un programa que muestre 3 n%cmeros ordenados de menor a mayor, utilizando un procedimiento.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	float num1, num2, num3;
	
	printf("Ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%f",&num1);
	printf("\nIngrese un segundo n%cmero: ",163);
	fflush(stdin);
	scanf("%f",&num2);
	printf("\nIngrese un tercer n%cmero: ",163);
	fflush(stdin);
	scanf("%f",&num3);
	
	printf("\nEl orden de menor a mayor de los numeros ingresados es: ");
	funcOrdenarMinToMaxSinArray(num1,num2,num3);
}

void ejercicio9(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("9: Escriba una funci%cn que devuelva la parte fraccionaria de cualquier n%cmero introducido por el usuario. Por ejemplo, si se introduce el n%cmero 27.897, deber%ca desplegarse el n%cmero 0.897.\n",162,163,163,161,163);
	//---------------------------------------------------------------------------------------------------------------------
	double num;
	
	printf("\nIngrese un n%cmero:",163);
	fflush(stdin);
	scanf("%lf",&num);
	
	printf("\nLa parte fraccionaria de %lf es: %lf",num,funcFraccionaria(num));
	
}

void ejercicio10(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("10: Hacer un procedimiento que sume y multiplique dos n%cmeros que reciba como argumentos y devuelva ambos resultados.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	float num1, num2;
	float ansSuma=0,ansMult=0;
	
	printf("\nIngrese un n%cmero",163);
	num1=lt_getFloat(": ");
	printf("\nIngrese un n%cmero",163);
	num2=lt_getFloat(": ");
	
	if (sumaYMultiplicacion (num1,num2,&ansSuma,&ansMult)==0)
	{
		printf("\nLos resultados son:");
		printf("\n%.2f+%.2f=%.3f \n\n%.2fx%.2f=%.3f",num1,num2,ansSuma,num1,num2,ansMult);	
	}
	else
	{
		printf("\nERROR");
	}	
}


void ejercicio11(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("11: Hacer un procedimiento llamado cambio() que tenga un par%cmetro en n%cmero entero y 10 par%cmetros de referencia en n%cmero entero llamados mil, quinientos, doscientos, cien, cincuenta, veinte, diez, cinco, dos y uno, respectivamente.",160,163,160,163);
	printf("\nEl procedimiento tiene que considerar el valor entero transmitido como una cantidad en pesos y convertir el valor en el n%cmero menor de billetes equivalentes.\n",163);
	//---------------------------------------------------------------------------------------------------------------------
	
	long int num;	
	int mil=0, quinientos=0, doscientos=0, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, dos=0, uno=0, dinero;
	
	
	printf("ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d", &num);
	
	printf("\n%d PESOS, en cambio es: ",num);
	
	dinero=cambio(num,&mil,&quinientos,&doscientos,&cien,&cincuenta,&veinte,&diez,&cinco,&dos,&uno);
	
	if (dinero==0)
	{
		if(mil>0)
		{
			if(mil==1)
			{
				printf("\n\n%d billete de 1000",mil);
			}
			else
			{
				printf("\n\n%d billetes de 1000",mil);
			}
		}
		if(quinientos>0)
		{
			if(quinientos)
			{
				printf("\n\n%d billete de 500",quinientos);	
			}
			else
			{
				printf("\n\n%d billetes de 500",quinientos);
			}
		}
		if(doscientos>0)
		{
			if(doscientos==1)
			{
				printf("\n\n%d billete de 200",doscientos);
			}
			else
			{
				printf("\n\n%d billetes de 200",doscientos);
			}
		}
		if(cien>0)
		{
			if(cien==1)
			{
				printf("\n\n%d billete de 100",cien);
			}
			else
			{
				printf("\n\n%d billetes de 100",cien);
			}
		}
		if(cincuenta>0)
		{
			if(cincuenta==1)
			{
				printf("\n\n%d billete de 50",cincuenta);
			}
			else
			{
				printf("\n\n%d billetes de 50",cincuenta);
			}
		}
		if(veinte>0)
		{
			if(veinte==1)
			{
				printf("\n\n%d billete de 20",veinte);	
			}
			else
			{
				printf("\n\n%d billetes de 20",veinte);
			}
		}
		if(diez>0)
		{
			if(diez==1)
			{
				printf("\n\n%d billete de 10",diez);
			}
			else
			{
				printf("\n\n%d billetes de 10",diez);
			}
		}
		if(cinco>0)
		{
			if(cinco==1)
			{
				printf("\n\n%d billete de 5",cinco);//moneda bah...	
			}
			else
			{
				printf("\n\n%d billetes de 5",cinco);//monedas bah...
			}
		}
		if(dos>0)
		{
			if(dos==1)
			{
				printf("\n\n%d billete de 2",dos);//moneda bah...
			}
			else
			{
				printf("\n\n%d billetes de 2",dos);//monedas bah...
			}
		}
		if(uno>0)
		{
			if(uno==1)
			{
				printf("\n\n%d billete de 1",uno);//monedas bah...
			}
			else
			{
				printf("\n\n%d billetes de 1",uno);//monedas bah...
			}
		}
	}
	else
	{
		printf("\n\nERROR DE CALCULO!!\n\n");
	}
}
	

void ejercicio12(){
	//ENUNCIADO------------------------------------------------------------------------------------------------------------
	printf("12: Escriba un procedimiento llamada tiempo() que tenga un par%cmetro en n%cmero entero llamado totalseg y tres par%cmetros de referencia enteros llamados horas, min y seg. La idea es convertir el n%cmero de segundos transmitido en el equivalente a horas, minutos y segundos.\n",160,163,160,163);
	//---------------------------------------------------------------------------------------------------------------------
	
	long int num;	
	int horas=0, minutos=0, segundos=0, totalSeg;
	
	
	printf("ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d", &num);
	
	printf("\n%d SEGUNDOS son: ",num);
	//printf("\n -%d- PRUEBAprefuncion-> si vale 0 es OK",horas); //debug
	totalSeg=tiempo(num,&horas,&minutos,&segundos);
	//printf("\n -%d- PRUEBApostfunc cuanto vale horas++ ",horas); //debug
	
	if(totalSeg==0)
	{
	
		if(horas>0)
		{
			if(horas==1)
			{
				printf("%d hora, ",horas);
			}
			else
			{
				printf("%d horas, ",horas);	
			}
		}
		if(minutos>0)
		{
			if(minutos==1)
			{
				printf("%d minuto, ",minutos);	
			}
			else
			{
				printf("%d minutos, ",minutos);
			}
		}
		if(segundos>0)
		{
			if(segundos==1)
			{
				printf("%d segundo.",segundos);	
			}
			else
			{
				printf("%d segundos.",segundos);
			}
		}
	}
	else
	{
		printf("\n\nERROR DE CALCULO!!\n\n");
	}
}

//FUNCIONES DE LOS EJERCICIO ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

//--------------ej1----------------------
char parImpar(int n){
	if(n%2 ==0){
		return 'p';
	}
	else{
		return 'i';
	}
}
//---------------------------------------

//--------------ej2----------------------
float mult(float op1,float op2)
{
    float ans;
    ans = op1 * op2;
    return ans;
}
//---------------------------------------

//--------------ej3----------------------

float suma (float op1,float op2)
{
    float ans;
    ans = op1 + op2;
    return ans;
}
float resta (float op1,float op2)
{
    float ans;
    ans = op1 - op2;
    return ans;
}
float multiplicacion (float op1,float op2)
{
    float ans;
    ans = op1 * op2;
    return ans;
}
double division (float op1,float op2)
{
    if (op2 != 0)
    {
        double ans;
        ans = (op1 + 0.0) / op2;
        return ans;
    }
    else
    {
        return 0.0;
    }
}

//---------------------------------------

//--------------ej4----------------------
float cuadrado(float num){
	
	return (num*num);
}
//---------------------------------------

//--------------ej5----------------------
int funpot(int base, int potencia){
	
	int aux,i;
	
	aux=base;
	
	for(i=1;i<potencia;i++)
	{
		base= base*aux;
	}
	return base;	
}
//---------------------------------------

//--------------ej6----------------------
//(CELCIUS A FAHRENHEIT: F=((9*C)/5)+32 || CELCIUS A KELVIN: K=C+273.15)
float celToFahr(float grades){
	
	float ans;
	
	ans=((9*grades)/5)+32;
	return ans;
}

float celToKelv(float grades){
	
	float ans;
	
	ans=grades+273.15;
	return ans;	
}
//---------------------------------------

//--------------ej7----------------------
int funcMayor(int op1, int op2, int op3)
{	
	int ans;
	
	if(op1>op2 && op1>op3){
		ans=op1;
	}
	else
	{
		if(op2>op1 && op2>op3){
			ans=op2;
		}
		else
		{
			ans=op3;
		}
	}
	return ans;
}
//---------------------------------------

//--------------ej8----------------------
void funcOrdenarMinToMaxSinArray(float op1, float op2, float op3)
{
	if(op1<op2 && op1<op3)
	{
		printf("%.2f, ",op1);
		if(op2<op3)
		{
			printf("%.2f, %.2f",op2,op3);
		}
		else
		{
			printf("%.2f, %.2f",op3,op2);
		}
	}
	else
	{
		if(op2<op1 && op2<op3)
		{
			printf("%.2f, ",op2);
			if(op1<op3)
			{
				printf("%.2f, %.2f",op1,op3);
			}
			else
			{
				printf("%.2f, %.2f",op3,op1);
			}
		}
		else
		{
			printf("%.2f, ",op3);
			if(op2<op1)
			{
				printf("%.2f, %.2f",op2,op1);
			}
			else
			{
				printf("%.2f, %.2f",op1,op2);
			}
		}	
	}
}
//---------------------------------------

//--------------ej9----------------------
double funcFraccionaria(double number)
{
	double ans;
	long int entero;
	
	entero=number;
	
	ans=number-entero;
	return ans;	
}
//---------------------------------------

//--------------ej10---------------------
int sumaYMultiplicacion (float op1, float op2, float *suma, float *mult)
{
	*suma=op1+op2;
	//printf("%f suma ",*suma);
	*mult=op1*op2;
	//printf("%f mult ",*mult);
	return 0;
}
//---------------------------------------

//--------------ej11---------------------
int cambio(long int operador, int *mil, int *quinientos, int *doscientos, int *cien, int *cincuenta, int *veinte, int *diez, int *cinco, int *dos, int *uno)
{

	while(operador>=MIL)
	{
		*mil+=1;
		operador-=MIL;
	}	
	if(operador>=QUINIENTOS)
	{
		*quinientos+=1;
		operador-=QUINIENTOS;
	}
	while(operador>=DOSCIENTOS)
	{
		*doscientos+=1;
		operador-=DOSCIENTOS;
	}
	if(operador>=CIEN)
	{
		*cien+=1;
		operador-=CIEN;
	}
	if(operador>=CINCUENTA)
	{
		*cincuenta+=1;
		operador-=CINCUENTA;
	}
	while(operador>=VEINTE)
	{
		*veinte+=1;
		operador-=VEINTE;
	}
	if(operador>=DIEZ)
	{
		*diez+=1;
		operador-=DIEZ;
	}
	if(operador>=CINCO)
	{
		*cinco+=1;
		operador-=CINCO;
	}
	while(operador>=DOS)
	{
		*dos+=1;
		operador-=DOS;
	}
	if(operador>=UNO)
	{
		*uno+=1;
		operador-=UNO;
	}	
	return operador;
}
//---------------------------------------

//--------------ej12---------------------
int tiempo(long int totalSeg, int *horas, int *minutos, int *segundos)
{
	//printf("\n en funcion horas (es 0)-> -%d- ",*horas);
	while(totalSeg>=HORA)
	{
		//*horas++; //si pongo *horas++ es como si sumara en la direccion de la memoria, asi funciona o con *horas=*horas+1; tambien. pero no entenderia la teoria atras del "=" en el caso de punteros... el por que pasa eso...
		*horas+=1; 
		totalSeg-=HORA;
		//printf("\n PRUEBA en iteraciones-> -%d- ",*horas);
	}
	while(totalSeg>=MINUTO)
	{
		*minutos+=1;
		totalSeg-=MINUTO;
	}
	while(totalSeg>=SEGUNDO)
	{
		*segundos+=1;
		totalSeg-=SEGUNDO;
	}
	return totalSeg;
}
//---------------------------------------




//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


