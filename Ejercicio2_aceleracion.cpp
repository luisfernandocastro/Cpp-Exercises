/*
aplicación para hallar la aceleración
de un vehículo. Teniendo en cuenta que la formula para hallar la aceleración es:
aceleracion = (velocidad final - velocidad inicial)/tiempo
*/

#include<iostream> //Encabezado para funciones de entrada y salida

using namespace std; // Espacio de nombres de la libreria estandar

//Funcion principal main
int main(){
	double aceleracion,vfinal,vinicial,tiempo; // Declaracion de la variable de tipo decimal

	cout<<"ingrese la velocidad final"<<endl; // Pedir la velocidad final
	cin>>vfinal; // Guardar valor ingresado en la variable vfinal	
	cout<<"Ingrese la velocidad inicial"<<endl; // Pedir la velocidad inicial
	cin>>vinicial; // Guardar valor ingresado en la variable vinicial
	cout<<"ingrese el tiempo"<<endl; // Pedir el tiempo
	cin>>tiempo; // Guardar valor ingresado en la variable tiempo

	// Formula de la Aceleracion
	aceleracion=(vfinal-vinicial)/tiempo;
	
	// Validacion de una division entre 0 
	if(tiempo != 0){
		cout<<"la aceleracion es "<<aceleracion<<endl; // Mostrar el resultadpo de la aceleracion
	}else{
		cout<<"Alerta: Agregue un tiempo mayor a 0"<<endl; // Mostrar el resultadpo de la aceleracion
	}
	
	system("pause"); // Espera a que el usuario presione una tecla al continuar
	return 0; // Finalizacion exitosa se pude usar EXIT_SUCCESS, con la libreria <cstdlib>
}
