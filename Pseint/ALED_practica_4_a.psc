SubAlgoritmo  MostrarMenu (  ) //MENU DE ACTIVIDADES (EJERCICIO POR EJERCICIO)
	ESCRIBIR("1: Crea un programa que escriba los números del 10 al 1 (de forma descendente).");
	ESCRIBIR("2: Un programa que escriba la secuencia de números 2, 4, 6, 8 ... 16.");
	ESCRIBIR("3: Un programa que escriba la secuencia de números 6, 5, 4,..., 1.");
	Escribir("4: Un programa que escriba la secuencia de números 3, 5, 7,..., 21.");
	Escribir("5: Un programa que escriba la secuencia de números 12, 10, 8,..., 0..");
	Escribir("6: Crea un programa que vaya sumando los números que el usuario introduzca, y mostrando dicha suma, hasta que introduzca el número 0, usando ``mientras``.");
	Escribir("7: Crea un programa que escriba en pantalla los números del 1 al 10, usando ``mientras``.");
	Escribir("8: Crea un programa que pida números positivos al usuario, y vaya calculando la suma de todos ellos (terminará cuando se teclea un número negativo o cero), usando ``repetir``.");
	Escribir("9: Crea un programa que escriba en pantalla los números pares del 26 al 10 (descendiendo), usando ``repetir``.");
	Escribir("10: Crea un programa que pida al usuario su código de usuario y su contraseña (ambos serán números enteros), y no le permita seguir hasta que introduzca como código ``1000`` y como contraseña ``1234``, usando ``repetir``");
	Escribir("11: Mejora el programa de la clave de acceso con ``repetir`` para que avise si el ingreso no es correcto.");
	Escribir("12: Mejora más todavía el programa de la clave de acceso con ``repetir``, para que sólo haya tres intentos.");
	escribir("13:SALIR");
Fin SubAlgoritmo

SubAlgoritmo Continuar() //FUNCION QUE CONGELA EL PROGRAMA Y PIDE UNA TECLA PARA CONTINUAR
	escribir("");
	escribir("Presione una tecla para continuar...");
	Esperar Tecla;
	Limpiar Pantalla
FinSubAlgoritmo

Algoritmo ALED_practica_4_a  //por motivos de practicidad las variables de nombre repetido en distintas actividades se sobreescribiran por los ejercicios posteriores.
	
//DEFINICIONES**********************************************************************************************************************************************************
	definir opc, flag, i, num, acum, codigo, password, contador Como Entero;
//***********************************************************************************************************************************************************************
	
//PROGRAMA**************************************************************************************************************************************************************
	
	flag=0; //FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	Repetir
		Si (flag=0) Entonces //MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
			ESCRIBIR ("Unidad 3: Estructuras Repetitivas");
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
				
				caso 1: //Ejercicio 3.1: Crea un programa que escriba los números del 10 al 1 (de forma descendente).
					
					Limpiar Pantalla;
					ESCRIBIR("1: Crea un programa que escriba los números del 10 al 1 (de forma descendente).");
					ESCRIBIR("");
					
					PARA i=10 Hasta 1 Hacer
						escribir i;
					FinPara
					
					flag=0; //ACA FUERZO A MOSTRAR EL MENU DE VUELTA YA QUE EL EJERCICIO HA TERMINADO
					Continuar();	//COLOCO UNA PAUSA DE PULSE UNA TECLA PARA CONTINUAR YA QUE LUEGO SE VACIARA LA PANTALLA
					
				caso 2: //Ejercicio 3.2: Un programa que escriba la secuencia de números 2, 4, 6, 8 ... 16.
					
					Limpiar Pantalla;
					ESCRIBIR("2: Un programa que escriba la secuencia de números 2, 4, 6, 8 ... 16.");
					ESCRIBIR("");
					
					Para i=2 Hasta 16 Con Paso 2 Hacer
						escribir i;
					FinPara
					
					flag=0;
					Continuar();
					
				caso 3: //Ejercicio 3.3: Un programa que escriba la secuencia de números 6, 5, 4,..., 1.
					
					Limpiar Pantalla;
					ESCRIBIR("3: Un programa que escriba la secuencia de números 6, 5, 4,..., 1.");
					ESCRIBIR("");
					
					para i=6 hasta 1 Hacer
						escribir i;
					FinPara
					
					flag=0;
					Continuar();
					
				caso 4: //Ejercicio 3.4: Un programa que escriba la secuencia de números 3, 5, 7,..., 21.
					
					Limpiar Pantalla;
					ESCRIBIR("4: Un programa que escriba la secuencia de números 3, 5, 7,..., 21.");
					ESCRIBIR("");
					
					para i=3 hasta 21 con paso 2 Hacer
						escribir i;
					FinPara
					
					flag=0;
					Continuar();
					
				caso 5: //Ejercicio 3.5: Un programa que escriba la secuencia de números 12, 10, 8,..., 0..
					
					Limpiar Pantalla;
					ESCRIBIR("5: Un programa que escriba la secuencia de números 12, 10, 8,..., 0.");
					ESCRIBIR("");
					
					para i=12 hasta 0 con paso -2 Hacer
						escribir i;
					FinPara
					
					flag=0;
					Continuar();
					
				caso 6: //Ejercicio 3.6: Crea un programa que vaya sumando los números que el usuario introduzca, y mostrando dicha suma, hasta que introduzca el número 0, usando "mientras".
					
					Limpiar Pantalla;
					ESCRIBIR("6: Crea un programa que vaya sumando los números que el usuario introduzca, y mostrando dicha suma, hasta que introduzca el número 0, usando `mientras`");
					ESCRIBIR("");
					
					acum=0;
					escribir("Ingrese un numero:");
					leer num;
					
					mientras num<>0
						acum=acum+num;
						escribir ("la suma acumulada es: "), acum;
						escribir("");
						escribir("Ingrese un numero:");
						leer num;
					FinMientras
					
					
					flag=0;
					Continuar();
					
				caso 7: //Ejercicio 3.7: Crea un programa que escriba en pantalla los números del 1 al 10, usando "mientras".
					
					Limpiar Pantalla;
					ESCRIBIR("7: Crea un programa que escriba en pantalla los números del 1 al 10, usando `mientras`.");
					ESCRIBIR("");
					
					num=0;
					Mientras num <10 Y num>=0 Hacer
						num= num+1;
						escribir num;
					FinMientras
					flag=0;
					Continuar();
					
				caso 8: //Ejercicio 3.8: Crea un programa que pida números positivos al usuario, y vaya calculando la suma de todos ellos (terminará cuando se teclea un número negativo o cero), usando "repetir".
					
					Limpiar Pantalla;
					ESCRIBIR("8: Crea un programa que pida números positivos al usuario, y vaya calculando la suma de todos ellos (terminará cuando se teclea un número negativo o cero), usando `repetir`.");
					ESCRIBIR("");
					
					acum=0;
					Repetir
						Escribir ("Ingrese un numero positivo: (ingrese 0 ò negativo para terminar)");
						leer num;
						
						si (num>0) Entonces
							acum=acum+num;
						FinSi
						
					Hasta Que (num<=0)
					Escribir ("la suma acumulada es: "), acum;
					
					flag=0;
					Continuar();
					
				caso 9: //Ejercicio 3.9: Crea un programa que escriba en pantalla los números pares del 26 al 10 (descendiendo), usando "repetir".
					
					Limpiar Pantalla;
					ESCRIBIR("9: Crea un programa que escriba en pantalla los números pares del 26 al 10 (descendiendo), usando `repetir`.");
					ESCRIBIR("");
					
					num=26;
					Repetir
						Escribir num;
						num=num-2;
					Hasta Que (num<10)
					
					flag=0;
					Continuar();
					
				caso 10: //Ejercicio 3.10: Crea un programa que pida al usuario su código de usuario y su contraseña (ambos serán números enteros), y no le permita seguir hasta que introduzca como código "1000" y como contraseña "1234", usando "repetir"
					
					Limpiar Pantalla;
					ESCRIBIR("10: Crea un programa que pida al usuario su código de usuario y su contraseña (ambos serán números enteros), y no le permita seguir hasta que introduzca como código `1000` y como contraseña `1234`, usando `repetir`");
					ESCRIBIR("");
					
					Repetir
					Escribir ("Ingrese su codigo de usuario: ");
						leer codigo;
						Escribir ("Ingrese su contraseña: ");
						leer password;
					Hasta Que (codigo=1000) Y (password=1234)
					Escribir ("BIENVENIDO");
					
					flag=0;
					Continuar();
					
				caso 11: //Ejercicio 3.11: Mejora el programa de la clave de acceso con "repetir", para que avise si el ingreso no es correcto.
					
					Limpiar Pantalla;
					ESCRIBIR("11: Mejora el programa de la clave de acceso con `repetir`, para que avise si el ingreso no es correcto.");
					ESCRIBIR("");
					
					Repetir
						Escribir ("Ingrese su codigo de usuario: ");
						leer codigo;
						Escribir ("Ingrese su contraseña: ");
						leer password;
						
						si (codigo<>1000 o password <> 1234) Entonces
							Escribir ("Contraseña o codigo usuario incorrecto");					
						FinSi
					//	si (codigo<>1000 o password <> 1234) Entonces			//hecho por separado DISCRIMINA QUE FUE LO MAL INGRESADO					
					//		si (password <> 1234) Entonces
					//			Escribir ("Contraseña incorrecta");
					//		SiNo											//COMO EL PASSWORD NO FUE LO MAL INGRESADO ENTONCES NO QUEDA OTRA QUE EL USUARIO
					//			Escribir ("Codigo de usuario incorrecto");
					//		FinSi
					//	FinSi
						
					Hasta Que (codigo=1000) Y (password=1234)
					Escribir ("BIENVENIDO");
					
					flag=0;
					Continuar();
					
				caso 12: //Ejercicio 3.12: Mejora más todavía el programa de la clave de acceso con "repetir", para que sólo haya tres intentos.
					
					Limpiar Pantalla;
					ESCRIBIR("12: Mejora más todavía el programa de la clave de acceso con `repetir`, para que sólo haya tres intentos.");
					ESCRIBIR("");
					
					contador=0;  
					Repetir
						Escribir ("Ingrese su codigo de usuario: ");
						leer codigo;
						Escribir ("Ingrese su contraseña: ");
						leer password;
						
						si (codigo<>1000 o password <> 1234) Entonces						
							si (password <> 1234) Entonces
								Escribir ("Contraseña incorrecta");
							FinSi
							Si (codigo<>1000) Entonces
								Escribir ("Codigo de usuario incorrecto");
							FinSi
							contador=contador+1; //SUMA UN INTENTO FALLIDO INDEPENDIENTEMENTE SI SE EQUIVOCO EN USUARIO O CLAVE
						FinSi
						
					Hasta Que (codigo=1000 Y password=1234) O (contador=3)
						
					si contador=3 Entonces
						escribir("Numero Maximo de Intentos Alcanzados"); //ES POR QUE YA FALLO 3 VECES
					SiNo
						Escribir ("BIENVENIDO"); // NO FALLO TRES VECES ASI QUE ENTRO AL SISTEMA
					FinSi
					
					flag=0;
					Continuar();
					
				caso 13: // SALE DEL PROGRAMA 
					
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
	
//*************************************************************************************************************************************************************************************
FinAlgoritmo