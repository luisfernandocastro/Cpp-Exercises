
/*
Author: Luis Fernando Castro Montero

aplicación que solicite al
usuario un número entero y como resultado muestre la tabla de multiplicar de dicho
número.
*/

#include<iostream> //Encabezado para funciones de entrada y salida
using namespace std; // Espacio de nombres de la libreria estandar

//Funcion principal main
int main(){
	system("color 0a"); // Le da un color personaizado a la terminal

	int num; // Declaracion de la variable de tipo entero
	
	cout<<"Ingrese el numero a multiplicar"<<endl; // Pedir el numero a multiplicar y mostrar la tabla de dicho numero
	cin>>num; // Guardar valor ingresado en la variable num
	
	// Ciclo for
	for(int i=1;i<=10;i++){ // crear variable i ,hasta que i sea menor o igual a 10, y que i se incremente en 1 por cada ciclo
		cout<<num<<" x "<<i<<" = "<<num*i<<endl; // Mostrar en pantalla en formato de la tabla
	}

	system("pause"); // Espera a que el usuario presione una tecla al continuar
	return 0; // Finalizacion exitosa se pude usar EXIT_SUCCESS, con la libreria <cstdlib>
	
}
