//numeros romanos 1 a 3999 
#include <stdio.h>

void main(){

	int num, aux;

	printf("Ingrese un n%cmero: ",163);
	fflush(stdin);
	scanf("%d",&num);
		
	while(num<1 || num>3999)
	{
		printf("ERROR. el n%cmero ingresado debe ser entre 1 y 3999\n",163);
		printf("Ingrese un n%cmero: ",163);
		fflush(stdin);
		scanf("%d",&num);
	}	
	
	aux=num; 
	
	printf("\nEl n%cmero ingresado es %d y su equivalente en n%cmeros Romanos es: ",163,num,163);
	while(aux>0)
	{
		if(aux>=1000)
		{
			printf("M");
			aux=aux-1000;
			continue; //indica cortar aca, pero volver a iterar el while (el break corta y sale del bucle)
		}
		if(aux>=100 && aux<1000)
		{
			if(aux>=900)
			{
				printf("CM");
				aux=aux-900;
				continue;
			}
			if(aux>=800)
			{
				printf("DCCC");
				aux-=800;
				continue;
			}
			if(aux>=700)
			{
				printf("DCC");
				aux-=700;
				continue;
			}
			if(aux>=600)
			{
				printf("DC");
				aux-=600;
				continue;
			}
			if(aux>=500)
			{
				printf("D");
				aux-=500;
				continue;
			}
			if(aux>=400)
			{
				printf("CD");
				aux-=400;
				continue;
			}
			if(aux>=300)
			{
				printf("CCC");
				aux-=300;
				continue;
			}
			if(aux>=200)
			{
				printf("CC");
				aux-=200;
				continue;
			}
			if(aux>=100)
			{
				printf("C");
				aux-=100;
				continue;
			}
		}
		if(aux>=10 && aux<100)
		{
			if(aux>=90)
			{
				printf("XC");
				aux-=90;
				continue;
			}
			if(aux>=80)
			{
				printf("LXXX");
				aux-=80;
				continue;
			}
			if(aux>=70)
			{
				printf("LXX");
				aux-=70;
				continue;
			}
			if(aux>=60)
			{
				printf("LX");
				aux-=60;
				continue;
			}
			if(aux>=50)
			{
				printf("L");
				aux-=50;
				continue;
			}
			if(aux>=40)
			{
				printf("XL");
				aux-=40;
				continue;
			}
			if(aux>=30)
			{
				printf("XXX");
				aux-=30;
				continue;
			}
			if(aux>=20)
			{
				printf("XX");
				aux-=20;
				continue;
			}
			if(aux>=10)
			{
				printf("X");
				aux-=10;
				continue;
			}
		}
		if(aux>=1 && aux<10)
		{
			if(aux>=9)
			{
				printf("IX");
				aux-=9;
				continue;
			}
			if(aux>=8)
			{
				printf("VIII");
				aux-=8;
				continue;
			}
			if(aux>=7)
			{
				printf("VII");
				aux-=7;
				continue;
			}
			if(aux>=6)
			{
				printf("VI");
				aux-=6;
				continue;
			}
			if(aux>=5)
			{
				printf("V");
				aux-=5;
				continue;
			}
			if(aux>=4)
			{
				printf("IV");
				aux-=4;
				continue;
			}
			if(aux>=3)
			{
				printf("III");
				aux-=3;
				continue;
			}
			if(aux>=2)
			{
				printf("II");
				aux-=2;
				continue;
			}
			if(aux>=1)
			{
				printf("I");
				aux--;
				continue;
			}
		}
	}
	getch();
}

