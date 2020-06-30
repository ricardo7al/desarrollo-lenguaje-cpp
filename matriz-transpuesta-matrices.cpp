/* Programa que lee una matriz de 3x3 y crea una matriz transpuesta */


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int array[3][3];
	
	for (int i= 0; i<3; i++) {
		for (int j= 0; j<3; j++) {
			cout<<"ingrese numero ["<<i<<"]["<<j<<"]: ";
			cin>>array[i][j];
		}
	}
	
	cout<<"Matriz original\n";
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			
			cout<<array[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"Matriz transpuesta\n";
	for (int i=0; i<3; i++) {
		for (int j=0; j<3; j++) {
			
			cout<<array[j][i]<<" ";
		}
		cout<<"\n";
	}
	
	
	
}
