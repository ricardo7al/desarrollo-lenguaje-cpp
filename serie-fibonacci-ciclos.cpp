/* ALgoritmo para resolver serie Fibonacci*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main() {
	
	int n, x=0, y=1, z=1;
	
	cout<<"Digite numero de elementos a trabajar: "; cin>>n;
	
	cout<<"1 ";
	for(int i=1; i<n; i++){
		z = x + y;
		cout<<z<<" ";
		x = y;
		y = z; 
	}
	
	cout<<"\n";
	system("pause");
	return 0;
	
	
}
