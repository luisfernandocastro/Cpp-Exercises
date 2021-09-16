/*
Author: Luis Fernando Castro Montero


Actividad 3.3
Basado en lo estudiado hasta el momento en el programa de formación,
analice y evalúe los componentes de cada una de las líneas de código y comente una
por una, dando una explicación de dicha instrucción.

*/

#include<iostream> //Encabezado para funciones de entrada y salida
#include<cstdlib> // Control del proceso EXIT_SUCCESS

using namespace std; // Espacio de nombres de la libreria estandar


//Funcion principal main
int main(){ 
	system("color 0a"); // Le da un color personaizado a la terminal
	int a,b; // Declaracion de la variables de tipo entero
	
	cout<<"Ingresa el primer numero"<<endl; // Pedir el primer numero
	cin>>a; // Guardar valor ingresado en la variable a
	cout<<"Ingresa el segundo numero"<<endl; // Pedir el segundo numero
	cin>>b; // Guardar valor ingresado en la variable b
	
	cout<<"La suma de los numeros es:"<<a+b<<endl; // Suma de a y b
	cout<<"La resta de los numeros es:"<<a-b<<endl; // Resta de a y b
	cout<<"La multiplicacion de los numeros es:"<<a*b<<endl;// Multiplicacion de a y b
	cout<<"La division de los numeros es:"<<a/b<<endl; // Division de a y b
	cout<<"El residuo de los numeros es:"<<a%b<<endl; // Modulo  de a y b

	system("pause"); // Espera a que el usuario presione una tecla al continuar
	return EXIT_SUCCESS; // Finalizacion exitosa se pude usar return 0	
}
