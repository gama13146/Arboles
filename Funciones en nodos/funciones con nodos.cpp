#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
struct Nodo{
	int valor;
	 Nodo *puntero;
}*lista;

int NV;
void ingresar( Nodo*&, int);
void mostrar( Nodo*lista);

int main(){
	
	int num,num1,num2;
	 Nodo *lista;
	lista=NULL;
	do{
		cout<<"..::Eliga::..\n";
		cout<<"1- Insertar Lista \n";
		cout<<"2- Mostrar Lista \n";
		cout<<"3- Salir \n";
		cin>>num;
		switch(num){
			case 1:
				
				cout<<"Ingresar el numero de nodos : "<<endl;
				cin>>num1;
				for (int i=1; i<=num1;i++){
					cout<<"Ingresa el valor del nodo "<<i+1<<endl;
					cin>>num2;
				ingresar(lista,num2);
			}
			break;
			case 2:
				cout<<"Los datos de la lista son: ";
				mostrar(lista);
				break;
			case 3:
				cout<<"--::Gracias::-- ";
				break;
				
		}
	}while(num!=3);
	return 0;
}
	void ingresar( Nodo*&lista, int dt){
	 Nodo *pn=new Nodo;
	 Nodo *aux;
	pn->valor=dt;
	pn->puntero=NULL;
	aux=pn;
	if (lista==NULL){
		lista=pn;
	}
	else{
		Nodo*aux=lista;
		while (aux->puntero!=NULL){
			aux=aux->puntero;
		}
		lista->puntero=pn;
		}
	}
	
	void mostrar(Nodo*lista) {
		Nodo *pn1=lista;
		pn1=lista;
		while(pn1!=NULL){
			cout<<pn1->valor<<endl;
			pn1=pn1->puntero;
	}
	cout<<endl;
}
