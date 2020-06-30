/* Programa que calcula el numero factorial */



#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int number, factorial = 1;
	
	cout<<"Ingrese un numero: "; cin>>number;
	
	for (int i=1; i<=number; i++) {
		factorial *= i;
	}
	cout<<"\nEl factorial del numero es: " <<factorial<<endl;
	
	system("pause");
	return 0;
	
}






