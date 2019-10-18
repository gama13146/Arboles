#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;
struct Nodo{
	int valor;
	Nodo *PunteroAnt;
	Nodo *PunteroSig;
};

void insertar( int);
void mostrar();
void mostrarAtras();

Nodo*lista=NULL;

int main (){
	int opcion,num1,num2,num3;

	do{
		cout<<"..::Eliga Una Opcion::..\n";
		cout<<"1- Insertar Lista \n";
		cout<<"2- Mostrar Lista \n";
		cout<<"3- Salir \n";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"ingrese el numero de Nodos ";
				cin>>num1;
				for(int i=1; i<=num1;i++){
					cout<<"Ingresa el valor del nodo "<<i<<"\n";
					cin>>num2;
				insertar(num2);
				}
				break;
			case 2:
				cout<<"....:::Las Listas Doblemente Enlazadas son:::....\n";
				mostrar();
				cout<<endl;
				mostrarAtras();
				cout<<"\n";
				break;
			case 3:
				cout<<"*****Gracias*****";
				break;
		}
	
}while(opcion!=3);
return 0;
}

void insertar(int dato1){
	Nodo *new_nodo=new Nodo;
	new_nodo->PunteroSig=NULL;
	new_nodo->PunteroAnt=NULL;
	new_nodo->valor=dato1;
	
	if(lista==NULL){
		lista=new_nodo;
	}
	else{
		Nodo *aux=lista;
		while(aux->PunteroSig!=NULL){
		aux=aux->PunteroSig;	
		}
		aux->PunteroSig=new_nodo;
		new_nodo->PunteroAnt=aux;
	}
	cout<<"\n";
	cout<<"El elemento "<<dato1<<"  a sido insertado en la lista \n";
	cout<<"\n";
}

void mostrar(){
	Nodo *aux=lista;

	while(aux!=NULL){
		cout<<aux->valor<<", ";
		aux=aux->PunteroSig;
	}
	cout<<endl;
}

void mostrarAtras(){
	Nodo *aux=lista;
	while(aux->PunteroSig!=NULL){
		aux=aux->PunteroSig;
	}
	while(aux!=NULL){
		cout<<aux->valor<<", ";
		aux=aux->PunteroAnt;
	}
	cout<<endl;
}

