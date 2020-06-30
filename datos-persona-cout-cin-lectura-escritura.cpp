/*
Programa que lee entrada de siguientes datos:

	Edad: type Integer
	Sexo: type Char
	Altura en metros: Type real
	
Al leer datos, El programa muestra los datos

*/

#include<iostream>

using namespace std;

int main(){
	
	int edad;
	char sexo[10];
	float altura;
	
	cout<<"Indique edad: "; cin>>edad;
	cout<<"Indique sexo: "; cin>>sexo;
	cout<<"Indique altura en metros: "; cin>>altura;
	
	cout<<"\nEdad: " <<edad<<endl;
	cout<<"Sexo: " <<sexo<<endl;
	cout<<"Altura en metros: " <<altura<<endl;
	
	
	return 0;
}
