#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{
	int valor;
	Nodo *punterosig;
};

//Prototipo de funcion 
void agregar(Nodo *& ,int);
void mostrar(Nodo *&,int &);


int main(){
	Nodo *pila=NULL;
	int dato1,dato2,opcion;
	do{
		cout<<"..::Eliga Una Opcion::..\n";
		cout<<"1- Insertar Datos A la Pila y Mostrarlos \n";
		cout<<"2- Salir \n";
		cin>>opcion;
		
		switch(opcion){
			case 1:
				cout<<"Cuantas Nodos Quiere Ingresar: "	;
				cin>>dato1;
				for(int i=1; i<=dato1;i++){
					cout<<"Ingresa el valor del  Nodo: "<<i<<"\n";
					cin>>dato2;
				agregar(pila,dato2);
				}
				cout<<"Los valores Sacados de la pila son: \n";
				while(pila!=NULL){
					mostrar(pila,dato2);
					if(pila!=NULL){
						cout<<dato2<<",";
				}
				else{
					cout<<dato2<<".";
					cout<<endl;
					}
				}
				break;
			case 2:
				cout<<"\t*****Gracias*****";
				break;	
		}
}while(opcion!=2);
	return 0;
} 

void agregar(Nodo *&pl,int dato ){
	Nodo *new_nodo=new Nodo();
	new_nodo->valor=dato;
	new_nodo->punterosig=pl;
	pl=new_nodo;
	
	cout<<" El elemento "<<dato<<"ha sido agregado a Pila correctamente \n";
	cout<<endl;
}


void mostrar(Nodo *&pla,int &dato2){
	Nodo *aux=pla;
	dato2=aux->valor;
	pla=aux->punterosig;
	delete aux;
}
