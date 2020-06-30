/* programa que define dos vectores tipo char y almacena contenido de ambos vectores en un nuevo vector */


#include<iostream>
#include<conio.h>

using namespace std;

int main() {
	
	char lettersOne[] = {'a','b','c','d','e'};
	char lettersSecond[] = {'f','g','h','i','j'};
	char letterInclude[10];
	
	for (int i=0; i<5; i++) {
		
		letterInclude[i] = lettersOne[i];
	}
	
			for (int i=5; i<10; i++) {
		
			letterInclude[i] = lettersSecond[i-5];
		}
		
	for (int i=0; i<10; i++) {
		
		cout<<letterInclude[i]<<endl;
	}
	
	
	getch();
	return 0;
}
