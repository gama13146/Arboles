#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
 
struct Nodo{
	int valor;
	Nodo *puntero;
};
//Prototipos de funciones
void ingresar(Nodo *&,Nodo *&, int);
bool cola_vacia(Nodo *);
void suprimir(Nodo *&, Nodo*&, int&);

int main(){
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	int dato,dato1,opc;
	do{
		cout<<"..::Eliga Una Opcion::..\n";
		cout<<"1- Insertar Datos a Cola \n";
		cout<<"2- Mostar Datos de la Cola \n";
		cout<<"3- Salir \n";
		cin>>opc;
		
		switch(opc){
			case 1:
				cout<<"Ingrese el numero de nodos: ";
				cin>>dato;
				for(int i=1; i<=dato;i++){
					cout<<"Ingrese el valor de nodo "<<i<<"\n";
					cin>>dato1;
				ingresar(frente,fin,dato1);
				} system("pause");
				break;
			case 2:
				cout<<"\nLos datos de la Cola son: ";
				while(frente!=NULL){
					suprimir(frente,fin,dato1);
					if(frente!=NULL){
						cout<<dato1<<" , ";
					}
					else{
						cout<<dato1<<" . ";
					}
				}	system("pause");
				break;
			case 3:
				cout<<"Gracias....";
				break;
		}
		system("cls");
	}while(opc!=3);
	

	return 0;
}

void ingresar(Nodo *&frente,Nodo *&fin, int dato){
	Nodo *New_nodo= new Nodo();
	
	New_nodo->valor=dato;
	New_nodo->puntero=NULL;
	
	if(cola_vacia(frente)){
		frente=New_nodo;
	}
	else{
		fin->puntero=New_nodo;
	}
	fin=New_nodo;
	
	cout<<"El elemento "<<dato<<" a sido ingresado correctamente a Cola \n";
	cout<<endl;
}

bool cola_vacia(Nodo *frente){
//	return (frente==NULL)? true : false;
	
	if(frente==NULL){
		return true;
	}
	else{
		return false;
	}
}

void suprimir(Nodo *&frente, Nodo*&fin, int &dato2){
	dato2=frente->valor;
	Nodo *aux=frente;
	
	if(frente==fin){
		frente=NULL;
		fin=NULL;
	}
	else{
		frente=frente->puntero;
	}
	delete aux;
}
