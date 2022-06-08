SubAlgoritmo  MostrarMenu (  ) //MENU DE ACTIVIDADES (EJERCICIO POR EJERCICIO)
	ESCRIBIR("1. Realizar un programa que pida al usuario un número y muestre su tabla de multiplicar hasta el 10.");
	ESCRIBIR("2. Hacer un programa que le pida números al usuario hasta que se ingrese el número 0. En ese momento el programa debe terminar y mostrar la cantidad de números mayores a 0 que se han ingresado.");
	ESCRIBIR("3. Calcular y mostrar la suma de los cuadrados de los primeros 10 números enteros mayores que 0.");
	Escribir("4. Escriba un programa que tome cada 4 horas la temperatura exterior, durante un período de 24 horas. Es decir, se deben leer 6 temperaturas. Calcular la temperatura media del día, la temperatura más alta y la más baja.");
	Escribir("5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.");
	Escribir("6. Diseñar un programa que eleve un número x a un exponente y, sin usar la función pow().");
	Escribir("7. Escriba un programa que pida un número n y realice la suma 1+2+3+....+n");
	Escribir("8. Escriba un programa que pida un número n y realice la suma de los números impares desde 1 hasta n.");
	Escribir("9. Calcular el factorial de un número ingresado por teclado.");
	Escribir("10. Hacer un programa que calcule 1-2+3-4+5-6?.+n (donde n se ingresa por teclado)");
	Escribir("11. Escribir un programa que calcule la serie de Fibonacci hasta el número n (ingresado por teclado)");
	Escribir("12. En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:");
	Escribir("· Alumnos que aprobaron todos los exámenes");
	Escribir("· Alumnos que aprobaron por lo menos un examen");
	Escribir("· Alumnos que aprobaron únicamente el último examen");
	Escribir("13. Realice un programa que solicite al usuario un número entre 1 y 100. El programa debe generar un número aleatorio en ese mismo rango [1-100] e indicarle al usuario si el número que digitó es menor o mayor al número aleatorio, hasta que lo adivine. Por último, deberá mostrarle el número de intentos que le llevó.");
	Escribir("14. Hacer un programa que descomponga un número ingresado por teclado en sus factores primos.");
	Escribir("15:SALIR");
Fin SubAlgoritmo

SubAlgoritmo Continuar() //FUNCION QUE CONGELA EL PROGRAMA Y PIDE UNA TECLA PARA CONTINUAR
	escribir("");
	escribir("Presione una tecla para continuar...");
	Esperar Tecla;
	Limpiar Pantalla
FinSubAlgoritmo

Algoritmo ALED_practica_4_b
	
	//DEFINICIONES**********************************************************************************************************************************************************
	definir opc, flag, i, num, acum, contador, tempAct, tempMedia, tempMayor, tempMenor, horaMenor, horaMayor como entero
	definir num2, base, modulo, primNum, segNum, aux, exam1, exam2, exam3  Como Entero;
	//***********************************************************************************************************************************************************************
	
	//PROGRAMA**************************************************************************************************************************************************************
	
	ESCRIBIR("****LUIS TONCIC****33655967****TSAS-1º-1ra-TM****2022****");
	Escribir("");
	flag=0; //FUERZO A ESCRIBIR EL MENU DE ACTIVIDADES AL MENOS UNA VEZ
	
	Repetir
		Si (flag=0) Entonces //MUESTRO EL MENU DE OPCIONES CON CADA EJERCICIO
			ESCRIBIR ("Unidad 4: Práctica Obligatoria");
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
					ESCRIBIR("1. Realizar un programa que pida al usuario un número y muestre su tabla de multiplicar hasta el 10.");
					ESCRIBIR("");
					
					Escribir("Ingrese un numero: ");
					leer num;
					
					para i=0 hasta 10 Hacer
						ESCRIBIR num, ("x"), i, ("="), num*i;
					FinPara
					
					flag=0; //ACA FUERZO A MOSTRAR EL MENU DE VUELTA YA QUE EL EJERCICIO HA TERMINADO
					Continuar();	//COLOCO UNA PAUSA DE PULSE UNA TECLA PARA CONTINUAR YA QUE LUEGO SE VACIARA LA PANTALLA
					
				caso 2: 
					
					Limpiar Pantalla;
					ESCRIBIR("2. Hacer un programa que le pida números al usuario hasta que se ingrese el número 0. En ese momento el programa debe terminar y mostrar la cantidad de números mayores a 0 que se han ingresado.");
					ESCRIBIR("");
					
					contador=0;
					Repetir 
						Escribir ("Ingrese un numero: ");
						leer num;
						
						si (num > 0) Entonces
							contador= contador+1;
						FinSi
						
					Hasta Que (num=0)
					
					Escribir ("Se ha ingresado la cantidad de "), contador, (" numeros mayores a cero.");
					
					flag=0;
					Continuar();
					
				caso 3: 
					
					Limpiar Pantalla;
					ESCRIBIR("3. Calcular y mostrar la suma de los cuadrados de los primeros 10 números enteros mayores que 0.");
					ESCRIBIR("");
					
					acum=0;
					ESCRIBIR Sin Saltar("1x1"); //por mero capricho para que salga ordenadita la escritura de la suma. no hqace falta hacerlo
					Para i=1 Hasta 10
						acum= acum+ i^2;
						si (acum>1) Entonces 		//capricho. no hace falta hacer este "SI"
							Escribir Sin Saltar ("+"),i,("x"),i;  // ESCRIBE UNA LINEA AL LADO DE OTRA; SIN USAR \n
						FinSi
						
					FinPara
					
					Escribir (" = "), acum;
					
					flag=0;
					Continuar();
					
				caso 4: 
					
					Limpiar Pantalla;
					Escribir("4. Escriba un programa que tome cada 4 horas la temperatura exterior, durante un período de 24 horas. Es decir, se deben leer 6 temperaturas. Calcular la temperatura media del día, la temperatura más alta y la más baja.");
					ESCRIBIR("");
					
					acum=0;
					para i=4 Hasta 24 Con Paso 4 
						tempAct=azar(43); //ASIGNO UNA TEMPERATURA ACTUAL ALEATORIA
						escribir("HORA: "),i,(":00 - "),("TEMPERATURA ACTUAL: "), tempAct, ("º"); 
						
						si i=4 Entonces 		//asigno la primera temperatura del dia a la temperatura mayor y menor correspondiente.
							tempMayor=tempAct;
							tempMenor=tempAct;
						FinSi
						si tempAct>tempMayor Entonces
							tempMayor=tempAct;
							horaMayor=i;
						FinSi
						si tempAct<tempMenor Entonces
							tempMenor=tempAct;
							horaMenor=i;
						FinSi
						acum=acum+TempAct;
					FinPara
					
					Escribir ("La temperatura media del dia fue: "), redon(acum/6), ("º");
					Escribir ("La temperatura mas baja del dia fue: "), tempMenor, ("º a las "), horaMenor, (":00 hs.");
					Escribir ("La temperatura mas alta del dia fue: "), tempMayor, ("º a las "), horaMayor, (":00 hs.");
					
					
					flag=0;
					Continuar();
					
				caso 5: 
					
					Limpiar Pantalla;
					Escribir("5. Escriba un programa que lea valores enteros hasta que se introduzca un valor en el rango [20-30] o se introduzca el valor 0. El programa debe entregar la suma de los valores mayores a 0 introducidos.");
					ESCRIBIR("");
					
					acum=0;
					Repetir
						
						Escribir ("Ingrese un numero Entero: ");
						leer  num;
						
						si (num>0) Y (num<20 o num>30) Entonces
							acum= acum+num;
						FinSi
						
					Hasta Que (num>=20 y num<= 30) o (num=0)
					
					Escribir ("La suma de los enteros positivos es: "), acum;
					
					flag=0;
					Continuar();
					
				caso 6: 
					
					Limpiar Pantalla;
					Escribir("6. Diseñar un programa que eleve un número x a un exponente y, sin usar la función pow().");
					ESCRIBIR("");
					
					Escribir("Ingrese un numero a exponenciar (base): ");
					leer num;
					Escribir ("Ingrese el Exponente del numero anterior: ");
					leer num2
					
					base=num;
					Para i=1 Hasta num2-1 Hacer 
						base=base*num;
					FinPara
					
					Escribir ("");
					Escribir ("El resultado de "), num, (" elevado a "), num2, (" es: "), base;
					
					flag=0;
					Continuar();
					
				caso 7: 
					
					Limpiar Pantalla;
					Escribir("7. Escriba un programa que pida un número n y realice la suma 1+2+3+....+n");
					ESCRIBIR("");
					
					Escribir ("ingrese un numero: ");
					leer num;
					
					escribir Sin Saltar("1");
					acum=0;
					Para i=1 Hasta num Hacer
						
						acum=acum+i;
						
						si (i<>1) y (i<>0) Entonces    //el i<>0 es para que grafique la suma  de negativos tambien. no needed
							Escribir Sin Saltar ("+"),i;
						FinSi
						
					FinPara
					
					Escribir (" = "),acum;
					
					flag=0;
					Continuar();
					
				caso 8: 
					
					Limpiar Pantalla;
					Escribir("8. Escriba un programa que pida un número n y realice la suma de los números impares desde 1 hasta n.");
					ESCRIBIR("");
					
					Escribir ("ingrese un numero: ");
					leer num;
					
					escribir Sin Saltar("1");
					
					acum=0;
					Para i=1 Hasta num Hacer
						
						modulo= i MOD 2;
						si (modulo= 1) o (modulo=-1) Entonces //el modulo =-1 es para que grafique y calcule la suma de impares negativos tambien. no needed
							acum=acum+i;
							si i<>1 Entonces
								Escribir Sin Saltar ("+"),i;
							FinSi
						FinSi
						
					FinPara
					
					Escribir (" = "),acum;
					
					flag=0;
					Continuar();
					
				caso 9: 
					
					Limpiar Pantalla;
					Escribir("9. Calcular el factorial de un número ingresado por teclado.");
					ESCRIBIR("");
					
					Escribir ("ingrese un numero: ");
					leer num;
					
					Mientras (num<0)												//VALIDO POR POSITIVOS (CONSIDERO AL CERO NEUTRO NO POSITIVO)
						Escribir ("ERROR. Por favor ingrese un numero positivo: ");
						leer num;
					FinMientras
					
					si (num=0) Entonces
						Escribir ("(Por definición el factorial de 0 es 1)"); 
						Escribir ("");
						
					sino 
						escribir sin saltar num, ("!: 1");
						acum=1;
						si (num<>1) Entonces
							Para i=2 Hasta num Hacer
								acum=acum*i;	
								Escribir Sin Saltar ("x"),i;
							FinPara
						FinSi
						Escribir sin saltar (" = "),acum;
					FinSi
					
					flag=0;
					Continuar();
					
				caso 10: 
					
					Limpiar Pantalla;
					Escribir("10. Hacer un programa que calcule 1-2+3-4+5-6?.+n (donde n se ingresa por teclado)");
					ESCRIBIR("");
					
					Escribir ("ingrese un numero: ");
					leer num;
					
					Mientras (num<0)												//VALIDO POR POSITIVOS (CONSIDERO AL CERO NEUTRO NO POSITIVO)
						Escribir ("ERROR. Por favor ingrese un numero positivo: ");
						leer num;
					FinMientras
					
					si (num=0) Entonces				//en caso de ingresar cero para que quede prolijo el muestreo de datos
						escribir Sin Saltar ("0");
						acum=0;
					SiNo
						escribir Sin Saltar ("1");
						
						acum=1;
						para i=1 Hasta num Hacer
							
							modulo= i MOD 2
							
							si (modulo=1) y (i<>1) Entonces
								acum=acum+i;
								escribir Sin Saltar("+"),i;
							FinSi
							
							si (modulo=0) Entonces
								acum=acum-i;
								escribir Sin Saltar("-"),i;
							FinSi
							// si colocas en esta linea Escribir (" = "), acum; se entiende como trabaja la suma de estos numeros, su patron.
						FinPara
					FinSi
					
					Escribir (" = "), acum;
					
					flag=0;
					Continuar();
					
				caso 11: 
					
					Limpiar Pantalla;
					Escribir("11. Escribir un programa que calcule la serie de Fibonacci hasta el número n (ingresado por teclado)");  //similar ordenamiento de listas aux i j 
					ESCRIBIR("");
					
					Escribir ("ingrese un numero: ");
					leer num;
					
					Mientras (num<=1) Hacer 										//VALIDO POR POSITIVOS
						Escribir ("ERROR. Por favor ingrese un numero posterior al inicio de la serie de fibonacci: ");
						leer num;
					FinMientras
					
					primNum=0;
					segNum=1;
					para i=1 Hasta num Hacer
						
						si (primNum<>0) Entonces 				//prolijidad para la escritura de la serie (sino arranca con coma la serie)
							Escribir Sin Saltar(","),primNum;	
						SiNo
							Escribir Sin Saltar primNum;	
						FinSi
						
						aux=primNum+segNum;
						primNum=segNum;
						segNum=aux;
						
					FinPara
					
					flag=0;
					Continuar();
					
				caso 12: 
					
					Limpiar Pantalla;
					Escribir("12. En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:");
					Escribir("· Alumnos que aprobaron todos los exámenes");
					Escribir("· Alumnos que aprobaron por lo menos un examen");
					Escribir("· Alumnos que aprobaron únicamente el último examen");
					ESCRIBIR("");
					
					acum=0;
					para i=1 Hasta 5 Hacer
						
						Escribir Sin Saltar("Alumno "), i, (":");
						
						exam1=azar(2); 		//asigno al azar resultados examen 1=aprobado, 0=desaprobado
						exam2=azar(2);
						exam3=azar(2);
						si (exam3=1) Entonces //si aprobo este examen lo revalido a valor -3 para difereciarlo (debe ser un numero negativo mayor al maximo positivo)
							exam3=-3;
						FinSi
						
						acum= exam1+exam2+exam3;
						
						segun acum Hacer
							
							caso -1: //1+1+-3
								
								Escribir (" aprobo todos los examenes");
								
							caso 1 o 2 o -2: //1+1+0 or 1+0+-3 or 0+1+-3 or 1+0+0 or 0+1+0 
								
								Escribir (" aprobo al menos un examen");
								
							caso -3:	//0+0+-3
								
								Escribir (" aprobo solamente el ultimo examen");
								
							De Otro Modo: //0+0+0
								
								Escribir (" Desaprobo todos los examenes");
								
						FinSegun
						
					FinPara
					
					flag=0;
					Continuar();
					
				caso 13: 
					
					Limpiar Pantalla;
					Escribir("13. Realice un programa que solicite al usuario un número entre 1 y 100. El programa debe generar un número aleatorio en ese mismo rango [1-100] e indicarle al usuario si el número que digitó es menor o mayor al número aleatorio, hasta que lo adivine. Por último, deberá mostrarle el número de intentos que le llevó.");
					ESCRIBIR("");
					
					Escribir("Ingrese un numero entre 1 y 100: ");
					leer num;
					
					Mientras (num>100 o num<1) Hacer
						Escribir("ERROR. Ingrese un numero entre 1 y 100: ");
						leer num;
					FinMientras
					
					num2 = azar(100)+1;
					
					contador=1;
					Mientras num<>num2 Hacer
						si (num2 > num) Entonces
							Escribir ("Su número es MENOR");
						SiNo
							Escribir ("Su número es MAYOR");
						FinSi
						contador= contador+1;
						
						Escribir("Ingrese un numero entre 1 y 100: ");
						leer num;
						Mientras (num>100 o num<1) Hacer
							Escribir("ERROR. Ingrese un numero entre 1 y 100: ");
							leer num;
						FinMientras
					FinMientras
					
					Escribir ( "¡Enhorabuena!, has adivinado en "), contador, (" intentos");
					
					flag=0;
					Continuar();
					
				caso 14: 
					
					Limpiar Pantalla;
					Escribir("14. Hacer un programa que descomponga un número ingresado por teclado en sus factores primos.");
					ESCRIBIR("");
					
					
					Escribir ("Ingrese su número: ");
					Leer num;							//validar con numeros mayores a 1 "???"
					
					Escribir Sin Saltar ("Los Factores Primos de "), num, (" son");
					
					i=2;	
					Mientras i <= num hacer
						Mientras (num mod i = 0) hacer
							Escribir Sin Saltar (", "), i;
							num = num/i;
						FinMientras
						i=i+1;
					FinMientras
					
					flag=0;
					Continuar();	
					
				caso 15: // SALE DEL PROGRAMA 
					
					Limpiar Pantalla;
					escribir ("Adios");
					flag=-1; //ACA FUERZO LA SALIDA DEL DO WHILE PARA QUE TERMINE REALMENTE EL PROGRAMA 
					
				De Otro Modo: //VALIDACION DE OPCION SELECCIONADA: caso invalido!
					
					Mientras opc<1 O opc>15 Hacer //RANGO DE OPCIONES CORRECTAS
						
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
