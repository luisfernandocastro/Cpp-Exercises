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
	int num; // Declaracion de la variable de tipo entero
	
	cout<<"Ingrese el numero a multiplicar"<<endl; // Pedir el numero a multiplicar y mostrar la tabla de dicho numero
	cin>>num; // Guardar valor ingresado en la variable num

	// Mostrar en pantalla en formato de la tabla sin el uso del for mas codigo
	cout<<num<<" x "<<1<<" = "<<num*1<<endl;
	cout<<num<<" x "<<2<<" = "<<num*2<<endl;
	cout<<num<<" x "<<2<<" = "<<num*3<<endl;
	cout<<num<<" x "<<3<<" = "<<num*4<<endl;
	cout<<num<<" x "<<4<<" = "<<num*5<<endl;
	cout<<num<<" x "<<5<<" = "<<num*6<<endl;
	cout<<num<<" x "<<6<<" = "<<num*7<<endl;
	cout<<num<<" x "<<7<<" = "<<num*8<<endl;
	cout<<num<<" x "<<8<<" = "<<num*9<<endl;
	cout<<num<<" x "<<9<<" = "<<num*10<<endl;

	system("pause"); // Espera a que el usuario presione una tecla al continuar
	return 0; // Finalizacion exitosa se pude usar EXIT_SUCCESS, con la libreria <cstdlib>
}
