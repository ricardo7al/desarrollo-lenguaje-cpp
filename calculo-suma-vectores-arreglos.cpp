/* Programa que define vector de números y calcula la suma de sus elementos. */


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	int numbers[] = {1,2,3,4,5,6,7};
	int add = 0;
	
	for(int i=0; i<7; i++) {
		
		add += numbers[i];		
	}	
	 cout<<"Resultado de suma de elementos en vector: "<<add<<endl;
		
	getch();
	return 0;
}

















