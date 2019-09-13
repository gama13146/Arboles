#include <iostream>
#include <conio.h>
#include<string.h>
using namespace std;
struct Nodo{
	int valor;
	struct Nodo *puntero;
};
int main(){
	struct Nodo dato1,dato2,dato3,dato4,dato5;
	dato1.valor=3;
	dato1.puntero=NULL;
	dato2.valor=7;
	dato2.puntero=NULL;
	dato3.valor=9;
	dato3.puntero=NULL;
	dato4.valor=2;
	dato4.puntero=NULL;
	dato5.valor=78;
	dato5.puntero=NULL;
	
	dato1.puntero=&dato2;
	dato2.puntero=&dato3;
	dato3.puntero=&dato4;
	dato4.puntero=&dato5;
	
	cout<<"Valor de Nodos: "<<endl;
	cout<<dato1.valor<<endl;
	cout<<dato1.puntero->valor<<endl;
	cout<<dato1.puntero->puntero->valor<<endl;
	cout<<dato1.puntero->puntero->puntero->valor<<endl;
	cout<<dato1.puntero->puntero->puntero->puntero->valor<<endl;
return 0;
}
