#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int numero1,numero2,*puntero;
	int arreglo[5]={1,2,3,4,5};
	
	numero1=10;
	numero2=20;
	puntero=&arreglo[0];
	
	cout<<"direccion de memoria del arreglo[0]: "<<&arreglo[0]<<endl;
	cout<<"direccion de memoria a la que apunta el puntero: "<<puntero<<endl;
	puntero++;
	cout<<"direccion de memoria del arreglo[1]: "<<&arreglo[1]<<endl;
	cout<<"direccion de memoria a la que apunta el puntero: "<<puntero<<endl;
	cout<<endl;
	cout<<"Valor numero1: "<<arreglo[0]<<endl;
	cout<<"Valor al que apunta el puntero: "<<*puntero<<endl;
	
	getch();
	return 0;
}
