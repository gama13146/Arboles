#include<iostream>
#include<conio.h>
#include <stdlib.h>

using namespace std;
struct Nodo{
	int valor;
	Nodo*Puntero;
};

void insertar(Nodo*&,int);
void mostrar(Nodo*);
void eliminar(Nodo*&,int);

Nodo*lista=NULL;

int main (){
	int opcion,num1,num2,num3;

	do{
		cout<<"..::Eliga Una Opcion::..\n";
		cout<<"1- Insertar Lista \n";
		cout<<"2- Mostrar Lista \n";
		cout<<"3- Eliminar elemento de Lista \n";
		cout<<"4- Salir \n";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"ingrese el numero de Nodos ";
				cin>>num1;
				for(int i=1; i<=num1;i++){
					cout<<"Ingresa el valor del nodo "<<i<<"\n";
					cin>>num2;
				insertar(lista,num2);
				}
				break;
			case 2:
				cout<<"....:::La Lista es:::....\n";
				mostrar(lista);
				cout<<"\n";
				break;
			case 3:
				cout<<"*********Ingrese el Numero A Eliminar: ************ \n";
				cout<<".....: ";
				cin>>num3;
				eliminar(lista,num3);
				cout<<num3<<"  a sido eliminado\n";
				cout<<"\n";
				cout<<"La Nueva Lista es: \n";
				mostrar(lista);
				cout<<"\n";
				break;
			case 4:
				cout<<"*****Gracias*****";
				break;
		}
	
}while(opcion!=4);
return 0;
}

void insertar(Nodo *&lista,int dato1){
	Nodo *new_nodo=new Nodo();
	new_nodo->valor=dato1;
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL) && (aux1->valor<dato1)){
		aux2=aux1;
		aux1=aux1->Puntero;
	}
	if(lista==aux1){
		lista=new_nodo;
	}
	else{
		aux2->Puntero=new_nodo;
	}
	new_nodo->Puntero=aux1;
	cout<<"\n";
	cout<<"El elemento "<<dato1<<"  a sido insertado en la lista \n";
	cout<<"\n";
}

void mostrar(Nodo *lista){
	Nodo *act=new Nodo();
	act=lista;
	
	while(act!=NULL){
		cout<<act->valor<<", ";
		act=act->Puntero;
	}
}

void eliminar(Nodo *&lista, int dato2){
	if(lista!=NULL){
		Nodo *borrar;
		Nodo *ant=NULL;
		borrar=lista;
		
		while((borrar!=NULL)&&(borrar->valor!=dato2)){
			ant=borrar;
			borrar=borrar=borrar->Puntero;
		}
		if(borrar==NULL){
			cout<<"El elemento no ha sido encontrado \n";
		}
		else if(ant==NULL){
			lista=lista->Puntero;
			delete borrar;
		}
		
		else{
			ant-> Puntero=borrar->Puntero;
			delete borrar;
		}
	}
}
