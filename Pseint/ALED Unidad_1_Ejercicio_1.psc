Algoritmo Unidad_1_Ejercicio_1 //por motivos de practicidad las variables de nombre repetido en distintas actividades se sobreescribiran por los ejercicios posteriores.
	
//--variables--
	DEFINIR numero1, numero2, producto, n, n1, n2, suma, primerNumero, segundoNumero, diferencia, resto, estados Como Entero
	DEFINIR division1, division2, habPais, promProv, numReal1, numReal2, prodReal, divisionReal, kilometros Como Real
//--o--
	
//--Ejercicios--
	
	//Ejercicio 1.1: Crea un programa que calcule la suma de 23 y 38.
	ESCRIBIR "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.1: Crea un programa que calcule la suma de 23 y 38."
	ESCRIBIR ""
	ESCRIBIR 23+38
		
	//Ejercicio 1.2: Crea un programa que muestre la operación "1234 + 5486" y su resultado.
	ESCRIBIR "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.2: Crea un programa que muestre la operación 1234 + 5486 y su resultado."
	ESCRIBIR ""
	ESCRIBIR "1234+5486= " ,1234+5486
		
	//Ejercicio 1.3: Crea un programa que calcule la multiplicación de 12345 por 98765.
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.3: Crea un programa que calcule la multiplicación de 12345 por 98765."
	ESCRIBIR ""
	ESCRIBIR 12345*98765
	
	//Ejercicio 1.4: Crea un programa que muestre el resultado de dividir 12345 entre 974.
	ESCRIBIR "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.4: Crea un programa que muestre el resultado de dividir 12345 entre 974."
	ESCRIBIR ""
	ESCRIBIR 12345/974
	
	//Ejercicio 1.5: Crea un programa que defina una variable llamada "numero1" y otra llamada "numero2". La primera tendrá el valor 14 y la segunda el valor 37. Guarda su multiplicación en una variable llamada "producto" y luego muestra el valor de dicha multiplicación en pantalla.
	ESCRIBIR "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.5: Crea un programa que defina una variable llamada `numero1` y otra llamada `numero2`. La primera tendrá el valor 14 y la segunda el valor 37. Guarda su multiplicación en una variable llamada `producto` y luego muestra el valor de dicha multiplicación en pantalla."
	ESCRIBIR ""
	numero1=14 
	numero2=37 
	producto=numero1*numero2	
	escribir producto
	
	//Ejercicio 1.6: Crea una variable "n", que tenga el valor 123, y muestra el valor de la variable en pantalla. Ahora cambia su valor por 145 y comprueba que realmente se ha modificado. Finalmente, muestra el resultado de multiplicar esa variable por 7
	ESCRIBIR "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.6: Crea una variable `n`, que tenga el valor 123, y muestra el valor de la variable en pantalla. Ahora cambia su valor por 145 y comprueba que realmente se ha modificado. Finalmente, muestra el resultado de multiplicar esa variable por 7"
	ESCRIBIR ""
	n=123
	ESCRIBIR "n es igual a:", n
	n=145
	ESCRIBIR "n, ahora es igual a:", n
	ESCRIBIR n*7	
	
	//Ejercicio 1.7:Crea un programa que pida dos números enteros y muestre su suma, usando variables llamadas "n1", "n2" y "suma".
	ESCRIBIR "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.7:Crea un programa que pida dos números enteros y muestre su suma, usando variables llamadas `n1`, `n2` y `suma`."
	ESCRIBIR ""
	ESCRIBIR "por favor ingrese un numero entero: "
	leer n1
	ESCRIBIR "por favor ingrese un segundo numero entero:"
	leer n2
	suma= n1+n2
	escribir "suma= " ,suma
	
	//Ejercicio 1.8: Crea un programa que pida dos números enteros y muestre su suma, diferencia, producto división del primero entre el segundo, y división del segundo entre el primero, usando dos variables llamadas "primerNumero" y "segundoNumero".
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.8: Crea un programa que pida dos números enteros y muestre su suma, diferencia, producto, división del primero entre el segundo, y división del segundo entre el primero, usando dos variables llamadas `primerNumero` y `segundoNumero`."
	ESCRIBIR ""
	ESCRIBIR "por favor ingrese un numero entero: "
	leer primerNumero
	ESCRIBIR "por favor ingrese un segundo numero entero:"
	leer segundoNumero
	suma= primerNumero+segundoNumero
	diferencia= primerNumero-segundoNumero	
	producto= primerNumero*segundoNumero
	ESCRIBIR "SUMA= ", suma, " | diferencia= ", diferencia, " | Producto= ", producto 
	
//--BASICO--
	//division1=primerNumero/segundoNumero
	//Escribir " | division primer numero (", primerNumero, ")", " entre el segundo (",segundoNumero ")", " = ", division1
	//division2=segundoNumero/primerNumero
	//Escribir " | division segundo numero (", segundoNumero, ")", " entre el primero (",primerNumero ")", " = ", division2
	
//--o--
	
//--VALIDACION SIMPLE--
	//Si segundoNumero=0 Entonces
	//	escribir " | Lo siento, no se puede dividir por 0" 
	//	Escribir "Ingrese otro numero distinto a cero (0): "
	//	leer segundoNumero
	//SiNo
	//	division1=primerNumero/segundoNumero
	//	Escribir " | division primer numero (", primerNumero, ")", " entre el segundo (",segundoNumero ")", " = ", division1
	//Fin Si
	
	//Si primerNumero=0 Entonces
	//	escribir " | Lo siento, no se puede dividir por 0" 
	//	Escribir "Ingrese otro numero distinto a cero (0): "
	//	leer primerNumero
	//SiNo
	//	division2=segundoNumero/primerNumero
	//	Escribir " | division segundo numero (", segundoNumero, ")", " entre el primero (",primerNumero ")", " = ", division2
	//Fin Si
	
//--o--
	
//--VALIDACION--
	Mientras segundoNumero=0 Hacer
		escribir " | Lo siento, no se puede dividir por 0" 
		Escribir "Ingrese otro numero distinto a cero (0): "
		leer segundoNumero
	Fin Mientras
	division1=primerNumero/segundoNumero
	Escribir " | division primer numero (", primerNumero, ") entre el segundo (",segundoNumero ") = ", division1
	
	Mientras primerNumero=0 Hacer
		escribir " | Lo siento, no se puede dividir por 0" 
		Escribir "Ingrese otro numero distinto a cero (0): "
		leer primerNumero
	Fin Mientras
	division2=segundoNumero/primerNumero
	Escribir " | division segundo numero (", segundoNumero, ") entre el primero (",primerNumero ") = ", division2
//--o--
	
	//Ejercicio 1.9: Pide dos números al usuario y el resto de dicha división. Usa los nombres de variables que quieras.
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.9: Pide dos números al usuario y el resto de dicha división. Usa los nombres de variables que quieras."
	ESCRIBIR ""
	ESCRIBIR "por favor ingrese un numero entero: "
	leer n1
	ESCRIBIR "por favor ingrese un segundo numero entero:"
	leer n2
	resto= n1 MOD n2
	ESCRIBIR "El resto de: ", n1, " y de: ", n2, " es: ", resto
	
	//Ejercicio 1.10: Crea un programa que pida al usuario la cantidad de habitantes de su país y cantidad de provincias o estados. A partir de esos datos calculará una estimación de la cantidad media de habitantes en cada provincia o estado. Finalmente mostrará ese resultado en pantalla. Debe usar los tipos de datos más adecuados.
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	ESCRIBIR "Ejercicio 1.10: Crea un programa que pida al usuario la cantidad de habitantes de su país y cantidad de provincias o estados. A partir de esos datos calculará una estimación de la cantidad media de habitantes en cada provincia o estado. Finalmente mostrará ese resultado en pantalla. Debe usar los tipos de datos más adecuados."
	ESCRIBIR ""
	ESCRIBIR "Por favor, ingrese la cantidad de habitantes de su pais: "
	leer habPais
	ESCRIBIR "Por favor, ingrese la cantidad de Provincias o Estados: "
	leer estados
	promProv= habPais/estados
	Escribir "la cantidad estimada de habitantes por Provincias es: ", redon(promProv)
	
	//Ejercicio 1.11: Crea un programa que te pida dos números reales y muestre en pantalla el resultado de multiplicarlos.
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.11: Crea un programa que te pida dos números reales y muestre en pantalla el resultado de multiplicarlos."
	Escribir ""
	Escribir "Por favor ingrese un numero del conjunto Real: "
	leer numReal1
	Escribir "por favor ingrese otro numero del conjunto Real: "
	leer numReal2
	prodReal= numReal1*numReal2
	Escribir "El producto de: ", numReal1, " y de: ", numReal2, " es: ", prodReal
	
	//Ejercicio 1.12: Pide al usuario dos números reales y muestra en pantalla el resultado de su división.
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.12: Pide al usuario dos números reales y muestra en pantalla el resultado de su división."
	Escribir ""
	Escribir "Por favor ingrese un numero del conjunto Real: "
	leer numReal1
	Escribir "por favor ingrese otro numero del conjunto Real: "
	leer numReal2
	Mientras numReal2=0 Hacer
		escribir " | Lo siento, no se puede dividir por 0" 
		Escribir "Ingrese otro numero distinto a cero (0): "
		leer numReal2
	Fin Mientras
	divisionReal=numReal1/numReal2
	Escribir "Division entre primer numero (", numReal1, ") y (",numReal2 ") = ", divisionReal
	
	//Ejercicio 1.13: Crea un programa que convierta de kilómetros a millas, usando la equivalencia 1 milla = 1619 metros.
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.13: Crea un programa que convierta de kilómetros a millas, usando la equivalencia 1 milla = 1619 metros."
	Escribir ""
	Escribir "por favor ingrese la cantidad de Kilometros que quiera convertir en Millas:" 
	leer kilometros
	escribir kilometros, "son: ", kilometros/1.619, " millas"
	
	//Ejercicio 1.14: Pide un número y calcula su cuarta potencia.
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.14: Pide un número y calcula su cuarta potencia."
	Escribir ""
	Escribir "Por favor ingrese un numero: "
	leer n1
	escribir n1, "^4 es: ", n1^4
	
	//Ejercicio 1.15: Crea un programa que genere un número al azar entre 1 y 20 (ambos incluidos)
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.15: Crea un programa que genere un número al azar entre 1 y 20 (ambos incluidos)"
	Escribir ""
	escribir azar(20)+1
	
	//Ejercicio 1.16: Crea un programa que genere un número al azar entre 100 y 500 (ambos incluidos).
	
	Escribir "--------------------------------------------------------------------------------------------------------------------"
	Escribir "Ejercicio 1.16: Crea un programa que genere un número al azar entre 100 y 500 (ambos incluidos)."
	Escribir ""
	Escribir azar(401)+100
	
	
//--o--	
FinAlgoritmo

