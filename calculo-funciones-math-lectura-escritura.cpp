/* Ejercicio para realizar calculo de una función matematica.
 funcion f de x igual raiz cuadrada de x dividida por y al cuadrado -1.
*/


#include<iostream>
#include<math.h>

using namespace std;

int main(){
	
	float x,y,outcome = 0;
	
	cout<<"ingrese valor de x: "; cin>>x;
	cout<<"Digite el valor de y: "; cin>>y;
	
	outcome = (sqrt(x))/(pow(y,2)-1);
	
	cout<<"\nResultado: " <<outcome<<endl;
	
	return 0;
}

