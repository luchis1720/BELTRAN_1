SubAlgoritmo  MostrarMenu (  ) //MENU DE ACTIVIDADES (EJERCICIO POR EJERCICIO)
		ESCRIBIR("1: Determinar si un numero es POSITIVO.");
		ESCRIBIR("2: Determinar si un numero es POSITIVO, NEGATIVO o CERO.");
		ESCRIBIR("3: Determinar si un numero es PAR o IMPAR.");
		Escribir("4: Leer un numero y calcular el 5% del numero leido.");
		Escribir("5: Sumar 2 numeros y mostrar el resultado solo si la suma es mayor a 25. En caso contrario mostrar el mensaje `La suma no se mostrara en pantalla`.");
		Escribir("6: Ingresar el nombre y la edad de una persona y mostrar si es mayor o menor de edad.");
		Escribir("7: Dadas las horas trabajadas por una persona y el valor de la hora, calcular su salario y mostrarlo, teniendo en cuenta que si las horas trabajadas es mayor a 40, el excedente se paga un 50% mas.");
		Escribir("8: Dado un tiempo  en minutos, calcular el equivalente en dias, horas y minutos.");
		Escribir("9: Escribir los numero del 1 al 100 (usar la estructura PARA.");
		Escribir("10: Escribir los numeros del 1 al 100 (usar la estructura MIENTRAS).");
		Escribir("11:SALIR");
Fin SubAlgoritmo
	
SubAlgoritmo Continuar() //FUNCION QUE CONGELA EL PROGRAMA Y PIDE UNA TECLA PARA CONTINUAR
		ESCRIBIR("");
		Escribir("Presione una tecla para continuar...");
		Esperar Tecla;
		Limpiar Pantalla;
FinSubAlgoritmo

Algoritmo ejercitacion_adicional_FdlP_01  //por motivos de practicidad las variables de nombre repetido en distintas actividades se sobreescribiran por los ejercicios posteriores.
	
	//DEFINICIONES**********************************************************************************************************************************************************
	definir opc, flag, num Como Entero;
	//***********************************************************************************************************************************************************************
	
	//PROGRAMA**************************************************************************************************************************************************************
	ESCRIBIR("****LUIS TONCIC****33655967****TSAS-1º-1ra-TM****2022****");
	Escribir("");
	flag=0; //FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	Repetir
		Si (flag=0) Entonces //MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
			ESCRIBIR ("FUNDAMENTOS DE LA PROGRAMACION - 1.Computadoras y programacion - Ejercitacion Adicional");
			ESCRIBIR ("");
			ESCRIBIR("EJERCICIOS:");
			ESCRIBIR("");
			MostrarMenu();
			Escribir ("");
			escribir ("Ingrese una opcion:");
			leer opc;
			flag=1;		//UNA VEZ ELEGIDA LA OPCION OBLIGO A EJECUTAR EL MENU CON LA OPCION SELECCIONADA		
		Fin Si	
		si (flag=1) Entonces //EJECUTO LA OPCION SELECCIONADA EN UN SWITCH
			
			Segun opc Hacer
				
				caso 1: 
					
					Limpiar Pantalla;
					ESCRIBIR("1: Determinar si un numero es POSITIVO.");
					ESCRIBIR("")
					
					
					flag=0; //ACA FUERZO A MOSTRAR EL MENU DE VUELTA YA QUE EL EJERCICIO HA TERMINADO
					Continuar();
					
				caso 2: 
					
					Limpiar Pantalla;
					ESCRIBIR("2: Determinar si un numero es POSITIVO, NEGATIVO o CERO.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 3: 
					
					Limpiar Pantalla;
					ESCRIBIR("3: Determinar si un numero es PAR o IMPAR.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 4: 
					
					Limpiar Pantalla;
					Escribir("4: Leer un numero y calcular el 5% del numero leido.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 5: 
					
					Limpiar Pantalla;
					Escribir("5: Sumar 2 numeros y mostrar el resultado solo si la suma es mayor a 25. En caso contrario mostrar el mensaje `La suma no se mostrara en pantalla`.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 6: 
					
					Limpiar Pantalla;
					Escribir("6: Ingresar el nombre y la edad de una persona y mostrar si es mayor o menor de edad.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 7: 
					
					Limpiar Pantalla;
					Escribir("7: Dadas las horas trabajadas por una persona y el valor de la hora, calcular su salario y mostrarlo, teniendo en cuenta que si las horas trabajadas es mayor a 40, el excedente se paga un 50% mas.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 8: 
					
					Limpiar Pantalla;
					Escribir("8: Dado un tiempo  en minutos, calcular el equivalente en dias, horas y minutos.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 9: 
					
					Limpiar Pantalla;
					Escribir("9: Escribir los numero del 1 al 100 (usar la estructura PARA.");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 10: 
					
					Limpiar Pantalla;
					Escribir("10: Escribir los numeros del 1 al 100 (usar la estructura MIENTRAS).");
					ESCRIBIR("")
					
					
					flag=0;
					Continuar();
					
				caso 11: // SALE DEL PROGRAMA 
					
					Limpiar Pantalla;
					escribir ("Adios");
					flag=-1; //ACA FUERZO LA SALIDA DEL DO WHILE PARA QUE TERMINE REALMENTE EL PROGRAMA 
					
				De Otro Modo: //VALIDACION DE OPCION SELECCIONADA: caso invalido!
					
					Mientras opc<1 O opc>13 Hacer //RANGO DE OPCIONES CORRECTAS
						
						escribir("");
						escribir("Opcion Invalida, vuelva a intentarlo: ");
						leer opc;
						
					FinMientras
					
					flag=1; //UNA VEZ INGRESADA UNA OPCION VALIDA, OBLIGO A EJECUTAR DIRECTAMENTE EL SWITCH
					
			Fin Segun
			
		Fin Si	
		
	Hasta Que (flag=-1) //FINALIZA EL PROGRAMA
	
FinAlgoritmo
