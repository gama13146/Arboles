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

int main(){
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	int dato,dato1;
	cout<<"Ingrese el numero de nodos: ";
	cin>>dato;
	for(int i=1; i<=dato;i++){
		cout<<"Ingrese el valor de nodo"<<i<<"\n";
		cin>>dato1;
	ingresar(frente,fin,dato1);
	}
	
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
	
	cout<<"El elemento"<<dato<<"a sido ingresado correctamente a Cola \n";
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
