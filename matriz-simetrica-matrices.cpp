/* Programa que determina si una matriz es simetrica o asimetrica
segun sus dimensiones */


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int array[100][100], row, column;
	char boolean = 'v';
	
    cout<<"No ingrese numeros mayor a 100 \n" <<endl;
	cout<<"Ingrese el numero de filas: "; cin>>row;
	cout<<"Ingrese el numero de columnas: "; cin>>column;
	
	for (int i=0; i<row; i++) {
		for (int j=0; j<column; j++) {
			cout<<"ingrese un numero ["<<i<<"] ["<<j<<"]";
			cin>>array[i][j];
		}
	}
	
	if (row==column) {
		for (int i=0; i<row; i++) {
			for (int j=0; j<column; j++) {
				if (array[i][j] != array[j][i]) {
					boolean = 'f';
					break;
					
				}
				
			}
		}
	}
	
	if (boolean=='f' || row!=column) {
		cout<<"La matriz es asimetrica";
	} 
	 else {
		cout<<"La matriz es simetrica";		
	}
	
	
	
	getch();
	return 0;
	
}






