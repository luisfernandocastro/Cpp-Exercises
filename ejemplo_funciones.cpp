#include<iostream>

using namespace std;


int suma(int num1,int num2);
int resta(int num1,int num2);
int mult(int num1,int num2);

int main(){

    int num1,num2;

    cout<<"Ingrese dos numeros"<<endl;
    cin>>num1>>num2;

    cout<<"La suma es:"<<suma(num1,num2)<<endl;
    cout<<"La resta es:"<<resta(num1,num2)<<endl;
    cout<<"La multiplicacion es:"<<mult(num1,num2)<<endl;


    return 0;
}


int suma(int num1,int num2){
    return num1+num2;
}

int resta(int num1,int num2){
    return num1-num2;
}


int mult(int num1,int num2){
    return num1*num2;
}