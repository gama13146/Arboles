#include <iostream>
#include <conio.h>

using namespace std;
struct Nodo{
	int valor;
	Nodo * izq, * der;
};

Nodo*raiz=NULL, *aux=NULL;
int main(){
	raiz=new Nodo();
	raiz->valor=8;
	raiz->izq=new Nodo();
	raiz->der=new Nodo();
	
	aux=raiz->izq;
	aux->valor=2;
	aux->izq=NULL;
	aux->der=new Nodo();
	
	aux=aux->der;
	aux->valor=6;
	aux->izq=new Nodo();
	aux->der=new Nodo();
	
	aux=aux->izq;
	aux->valor=5;
	aux->izq=NULL;
	aux->der=NULL;
	
//	aux=aux->der;
//	aux->valor=7;
//	aux->izq=NULL;
//	aux->der=NULL;
	
	aux=raiz->der;
	aux->valor=13;
	aux->der=NULL;
	aux->izq= new Nodo();
	
	aux=aux->izq;
	aux->valor=9;
	aux->izq=NULL;
	aux->der=new Nodo();
	
	aux=aux->der;
	aux->valor=10;
	aux->izq=NULL;
	aux->der=NULL;
	
	cout<<raiz->valor<<endl;
	cout<<raiz->izq->valor<<" "<<raiz->der->valor<<endl;
	cout<<raiz->izq->der->valor<<" "<<raiz->der->izq->valor<<endl;
	cout<<raiz->izq->der->izq->valor<<" "<<raiz->der->izq->der->valor<<endl;
	return 0;
}
