Algoritmo practica_obligatoria_unidad_2 //por motivos de practicidad las variables de nombre repetido en distintas actividades se sobreescribiran por los ejercicios posteriores.
	
	//--variables--
	
	DEFINIR nota1, numero1, edad, sexo, mes, primerNumero, segundoNumero, vehiculo, opcionn Como Entero
	DEFINIR modulo, raizcuad, numReal1, cubo Como Real
	Definir nombre Como Caracter
	
	//--o--
		
	//--Ejercicios--
	
	
	//1. Comprobar si un alumno está aprobado (si su nota es mayor o igual a 7) 
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "1. Comprobar si un alumno está aprobado (si su nota es mayor o igual a 7)"
	escribir ""
	
	escribir "ingrese nota del alumno: "
	leer nota1
	
	si nota1 >= 7 Entonces
		escribir "alumno esta aprobado con: ", nota1
	SiNo
		escribir "alumno desaprobado con: ",nota1
	FinSi
	
	//2. Comprobar si un número digitado por el usuario es positivo o negativo.
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir " 2. Comprobar si un número digitado por el usuario es positivo o negativo."
	escribir ""
	
	escribir "ingrese un numero: "
	leer numero1
	
	si numero1 >= 0 Entonces
		escribir "el numero ingresado: ",numero1," es positivo."
	SiNo
		escribir "el numero ingresado: ",numero1, " es negativo"
	FinSi
	
	//3. Determinar si un número es par o impar.
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "3. Determinar si un número es par o impar." 
	escribir ""
	
	escribir "ingrese un numero: "
	leer numero1
	modulo=  numero1 MOD 2
	
	si modulo =0 Entonces
		escribir "el numero ingresado: ",numero1," es par."
	SiNo
		escribir "el numero ingresado: ",numero1, " es impar"
	FinSi
	
	//4. Calcular el mayor de 2 números.
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "4. Calcular el mayor de 2 números."
	escribir ""
	
	escribir "ingrese un numero:"
	leer primerNumero
	escribir "ingrese otro numero:"
	leer segundoNumero
	
	si primerNumero > segundoNumero Entonces
		escribir "el numero: ",primerNumero," es mayor."
	SiNo 
		si segundoNumero > primerNumero Entonces
			escribir "el numero: ",segundoNumero, " es mayor."
		SiNo
			escribir "los numeros son iguales"
		FinSi
		
	FinSi
	
	//5. Ingrese un número y calcule e imprima su raíz cuadrada. Si el número es negativo imprima el número y un mensaje que diga "tiene raíz imaginaria".
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "5. Ingrese un número y calcule e imprima su raíz cuadrada. Si el número es negativo imprima el número y un mensaje que diga `tiene raíz imaginaria`."
	escribir ""
	
	escribir "por favor ingrese un numero:"
	leer numReal1
	
	si numReal1 >=0 Entonces
		raizcuad = raiz(numReal1)
		escribir "la raiz cuadrada de: ",numReal1, " es: ", raizcuad
	SiNo
		Escribir "el numero: ",numReal1, " tiene raiz imaginaria"
	FinSi
	
	//6. Ingresar por teclado el nombre, el sexo y la edad de cualquier persona e imprima, solo si la persona es de sexo femenino y mayor de edad, el nombre de la persona.
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "6. Ingresar por teclado el nombre, el sexo y la edad de cualquier persona e imprima, solo si la persona es de sexo femenino y mayor de edad, el nombre de la persona."
	escribir ""
	
	escribir "ingrese el nombre de la persona: "
	leer nombre
	escribir "ingrese el genero de la persona (presione 1 para masculino ò 2 para femenino): "
	escribir "1.masculino"
	escribir "2.femenino"
	leer sexo
	escribir "ingrese la edad de la persona: "
	leer edad
	
	si edad >= 18  Y sexo = 2 Entonces
		escribir "el nombre de la persona es :", nombre
	SiNo
		escribir "la persona no es femenina o es menor de edad"
	FinSi
	
	//7. Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico:
	//· 1 ? turismo, peaje = $170
	//· 2 ? autobús, peaje = $400
	//· 3 ? motocicleta, peaje = $100
	//· Caso contrario: vehículo no autorizado
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "7. Seleccionar un tipo de vehículo e indicar el peaje a pagar según un valor numérico:"
	escribir "· 1 - turismo, peaje = $170"
	escribir "· 2 - autobús, peaje = $400"
	escribir "· 3 - motocicleta, peaje = $100"
	escribir "· Caso contrario: vehículo no autorizado"
	escribir""
	
	escribir "ingrese el tipo de vehiculo: (PRESIONE 1 PARA turismo , PRESIONE 2 PARA autobús, PRESIONE 3 PARA motocicleta"
	escribir "1.-turismo"
	escribir "2.-autobús"
	escribir "3.-motocicleta"
	leer vehiculo
	
	Segun vehiculo Hacer
		Caso 1:
			escribir "debe pagar $170 de peaje"
		Caso 2:
			escribir "debe pagar $400 de peaje"
		Caso 3:
			escribir "debe pagar $100 de peaje"
		De Otro Modo:
			escribir "Vehiculo no autorizado"
	Fin Segun
	
	//8. Ingresar un número entre 1 y 12 y mostrar el nombre del mes al que corresponde ese número.
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "8. Ingresar un número entre 1 y 12 y mostrar el nombre del mes al que corresponde ese número."
	escribir ""
	
	escribir "Por favor ingrese el numero de mes que desea: "
	leer mes
	
	Segun mes Hacer
		Caso 1:
			escribir "Enero"
		Caso 2:
			escribir "Febrero"
		Caso 3:
			escribir "marzo"
		Caso 4:
			escribir "abril"
		Caso 5:
			escribir "mayo"
		Caso 6:
			escribir "junio"
		Caso 7:
			escribir "julio"
		Caso 8:
			escribir "agosto"
		Caso 9:
			escribir "septiembre"
		Caso 10:
			Escribir "octubre"
		CAso 11:
			Escribir "noviembre"
		Caso 12:
			Escribir "Diciembre"
		De Otro Modo:
			escribir "No es un numero valido de mes"
	FinSegun
	
	//9. Dada una nota de un examen mediante un código, escribir el literal que le corresponde a la nota, donde: A = "Excelente" B = "Notable" C = "Aprobado" D y F = "Reprobado"
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "9. Dada una nota de un examen mediante un código, escribir el literal que le corresponde a la nota, donde: A = `Excelente` B = `Notable` C = `Aprobado` D y F = `Reprobado`"
	escribir ""
	
	escribir "ingrese una nota (PRESIONE 1 para A, PRESIONE 2 para B, PRESIONE 3 para C, PRESIONE 4 para D y PRESIONE 5 para F)"
	escribir "1.-A"
	escribir "2.-B"
	escribir "3.-C"
	escribir "4.-D"
	Escribir "5.-F"
	leer nota1
	
	segun nota1 Hacer
		Caso 1:
			escribir "EXCELENTE"
		Caso 2:			
			escribir "NOTABLE"
		Caso 3:	
			escribir "APROBADO"
		Caso 4:
			Escribir "REPROBADO"
		caso 5:
			Escribir "REPROBADO"
		De Otro Modo:
			escribir "el codigo de nota ingresado es erroneo"
	FinSegun
	
	//10. Hacer un menú que considere las siguientes opciones: 
	//· Caso 1: Cubo de un número 
	//· Caso 2: Número par o impar 
	//· Caso 3: Salir
	
	escribir "---------------------------------------------------------------------------------------------------------------"
	escribir "10. Hacer un menú que considere las siguientes opciones:"
	escribir "· Caso 1: Cubo de un número"
	escribir "· Caso 2: Número par o impar"
	escribir "· Caso 3: Salir"
	escribir ""
	
	Hacer
		escribir "*************************"
		escribir "* Ingrese una OPCION:   *" 
		escribir "* 1: Cubo de un número  *" 
		escribir "* 2: Número par o impar *"
		escribir "* 3: Salir              *"
		escribir "*************************"
		leer opcionn
		
		Segun opcionn Hacer
			Caso 1:
				escribir "ingrese un numero: "
				leer numReal1
				
				cubo= numReal1^3
				Escribir "el cubo de: ",numReal1, " es: ", cubo
			Caso 2:
				escribir "ingrese un numero: "
				leer numero1
				modulo=  numero1 MOD 2
				
				si modulo =0 Entonces
					escribir "el numero ingresado: ",numero1," es par."
				SiNo
					escribir "el numero ingresado: ",numero1, " es impar"
				FinSi
			Caso 3:
				escribir "ADIOS (^.^)"
			De Otro Modo:
				escribir "¡¡¡¡OPCION INVALIDA!!!!"
				escribir ""
				escribir "*************************"
				escribir "* Ingrese una OPCION:   *" 
				escribir "* 1: Cubo de un número  *" 
				escribir "* 2: Número par o impar *"
				escribir "* 3: Salir              *"
				escribir "*************************"
				leer opcionn
		FinSegun
		
	Hasta Que opcionn >0 Y opcionn<4
	
	
	
	
	
	
	
FinAlgoritmo
