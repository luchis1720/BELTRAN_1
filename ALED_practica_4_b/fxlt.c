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

//FUNCIONES*****************************************************************************************************************************************************************


int lt_menu (char cadenas_del_menu[]){ 	
	int choice;
	printf("%s", cadenas_del_menu);
	choice=lt_getInt("\nElija una opcion: ");
	return choice;
}

char lt_getChar(char cadena_a_mostrar[]){
    char chara;
    printf("%s",cadena_a_mostrar);
    fflush(stdin);
    scanf("%c",&chara);
    return chara;
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

long int lt_getLongInt(char cadena_a_mostrar[], int enteroL_len){ 			//para DNI 8
    long int validInt, enteroL, letras;
    char auxiliar[128];
    char numero[11];
    printf("%s", cadena_a_mostrar);
    scanf("%s", auxiliar);

    validInt = lt_validarEnteros(auxiliar);
    letras= strlen(auxiliar);

    while (validInt!=0 || letras>enteroL_len || letras<enteroL_len)
    {
        printf("ERROR. n%cmero inv%clido... reintente por favor\n",163,160);
        printf("%s", cadena_a_mostrar);
        scanf("%s",auxiliar);
        validInt = lt_validarEnteros(auxiliar);
        letras= strlen(auxiliar);
    }
    strcpy(numero, auxiliar);
    enteroL= atol(numero);

    return enteroL;
}

float lt_getFloat (char cadena_a_mostrar[]){
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

void lt_getTexto(char cadena_a_mostrar[],char save[],int texto_len)
{
    char auxiliar [texto_len*10];
    int letras, validText;

    printf("%s",cadena_a_mostrar);
    fflush(stdin);
    scanf("%[^\n]", auxiliar);

    letras = strlen(auxiliar);
    validText = lt_validarTexto(auxiliar);

    while (validText!=0 || letras >texto_len)
    {
        printf("ERROR. reintente por favor:\n");
        printf("%s", cadena_a_mostrar);
        fflush(stdin);
        scanf("%[^\n]", auxiliar);
        letras = strlen(auxiliar);
        validText = lt_validarTexto(auxiliar);
    }
    strcpy(save, auxiliar);
}

void lt_getName(char save[]){
    char nombre[41];
    char apellido [41];
    char apellidoynombre[83];
    int i;

    lt_getTexto("\nIngrese un nombre: ", nombre,41);
    lt_getTexto("\nIngrese un apellido: ", apellido,41);

    strlwr(nombre);
    strlwr(apellido);
    nombre[0]= toupper(nombre[0]);
    apellido[0]= toupper(apellido[0]);
    for (i=0; i<41; i++)
    {
        if(nombre[i]==' ' && nombre [i+1]!= ' ')     //busco si existe un segundo nombre para tambien ponerle mayuscula al que corresponde
        {
            nombre[i+1] = toupper(nombre[i+1]);
        }
    }
    for (i=0; i<41; i++)
    {
        if(apellido[i]==' ' && apellido [i+1]!= ' ')	//busco si existe un segundo apellido para tambien ponerle mayuscula al que corresponde
        {
            apellido[i+1] = toupper(apellido[i+1]);
        }
    }

    strcpy(apellidoynombre, apellido);			//copio todo a una sola variable separando los apellidos de los nombres por una coma con espacio
    strcat(apellidoynombre, ", ");
    strcat(apellidoynombre, nombre);

    strcpy(save, apellidoynombre);
}

int lt_enterOrEsc (char cadena_a_mostrar[]){
    char conf;
    int ans;

    printf("%s", cadena_a_mostrar);
    printf("\npresione ENTER para continuar o ESC para cancelar?\n\n");
    fflush(stdin);
    conf= getch();
    while (!(conf==27 || conf==13))
    {
        printf("\nERROR. presione ENTER para continuar o ESC para cancelar?\n\n");
        fflush(stdin);
        conf= getch();
    }
    if (conf!= 27 )
    {
        ans= 1;
    }
    else
    {
        printf("\nACCION CANCELADA POR EL USUARIO\n\n");
        ans= 0;
    }
    return ans;
}

char lt_getNumeroAleatorio(int desde, int hasta, int iniciar){
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde)) ;
}

void lt_continuar(){ 
		printf("\n\n");		
		system("pause");
		system("cls");
}

void lt_showDate(void){ // muestra la hora y dia actual.
    time_t timer;
    char buffer[26];
    struct tm* tm_info;

    time(&timer);
    tm_info = localtime(&timer);

    strftime(buffer, 26, "%Y:%m:%d %H:%M:%S", tm_info);
    puts(buffer);
}

void lt_clear(void){   // limpia pantalla usando secuencias ANSI escape.
#ifdef __unix__
    system("clear");
#else
    system("cls");
#endif // __unix__
}

void lt_sleep(int msc){ //realiza un retraso. ms = cantidad de milisegundos.
#ifdef __unix__
    usleep(ms*1000);
#else
    Sleep(msc);
#endif // __unix__
}

void lt_flush(void){	//realiza la limpieza del buffer de entrada (stdin) standar input.
#ifdef __unix__
    setbuf(stdin,NULL);
#else
    fflush(stdin);
#endif // __unix__
}



//***************************************************************************************************************************************************************************



//VALIDACIONES***************************************************************************************************************************************************************


int lt_validarEnteros(char cadena[]){
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

int lt_validarFlotantes(char cadena[]){
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

int lt_contadorCadena(char cadena[]){ 	//valid del validfloat
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

int lt_allowNeg(char cadena[]){ 	//valid del validfloat
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

int lt_validarTexto(char cadena[]){
    int i, max, ans;
    max=strlen(cadena);

    for(i=0; i<max; i++ )
    {
        if((cadena[i] == ' ') || (cadena[i] >= 'A' && cadena[i] <= 'Z') || (cadena[i] >= 'a' && cadena[i] <= 'z'))
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

/*void lt_mezclaRandom (Struct1 vec[]){
    int i, j, limite_array=49; //igualar a constante
    Struct1 auxiliar;

    lt_getNumeroAleatorio(0,1,1);
    for(i=0; i<limite_array-1; i++)
    {
        for(j=0; j<limite_array; j++)
        {
            if(lt_getNumeroAleatorio(0,1,0))
            {
                auxiliar=vec[i];
                vec[i]=vec[j];
                vec[j]=auxiliar;
            }
        }
    }
}*/

//OTROS**********************************************************************************************************************************************************************

void lt_begin(){
    lt_clear();
	printf("\n*************************************************************\n*\t\t\t\t\t\t\t    *\n* Luis A. Ton");
    printf("cic  DNI:33.655.967  leg:9923  div: 1ro_1raTM  *\n*\t\t\t\t\t\t\t    *\n*\t ===== \t\t    ALED 1 \t\t ");
    printf("=====\t    *\n*\t\t\t\t\t\t\t    *\n*************************************************************\n");
    lt_sleep(172);
}

void lt_end(){
		printf("\n*************************************************************\n*\t\t\t\t\t\t\t    *\n*\t=============\t  GRACI");
		printf("AS!!\t=============       *\n*\t\t\t\t\t\t\t    *\n*************************************************************\n");
}

