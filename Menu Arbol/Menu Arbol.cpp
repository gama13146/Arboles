#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;

struct Arbol{
	int valor;
	Arbol *izq, *dere;
};
//Prototipos de funciones

Arbol *newnodo(int);

void insertar(Arbol *&,int);
void mostrar(Arbol *,int);
void PostOrden(Arbol *);
void PreOrden(Arbol *);
void InOrden(Arbol *);

Arbol *rama=NULL;

int main(){
	setlocale(LC_ALL, "");
	int opc,nod,cont=0,val;
	do{
		cout<<"\t*** ELIJA ALGUNA OPCION DEL MENÚ*** \n";
		cout<<"\t1.- Insertar Nodos  al Arból \n";
		cout<<"\t2.- Mostrar Arból \n";
		cout<<"\t3.- Recorrido En PreOrden \n";
		cout<<"\t4.- Recorrido En PostOrden \n";
		cout<<"\t5.- Recorrido En InOrden \n";
		cout<<"\t6.- Salir \n";
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"Cuantos nodos desea insertar: \n";
				cin>>nod;
				for(int i=1; i<=nod; i++){
					cout<<"Ingrese el valor del nodo "<<i<<"\n";
					cin>>val;
					insertar(rama,val);	
				}
				cout<<"\n";
				break;
			case 2:
				cout<<" EL ARBOL ES: \n";
				mostrar(rama,cont);
				cout<<"\n";
				system ("pause");
				break;
			case 3:
				cout<<" EL RECORRIDO EN PREORDEN ES : \n";
				PreOrden(rama);
				cout<<"\n";
				system("pause");
				break;
			case 4:
				cout<<" EL RECORRIDO EN POSTORDEN ES : \n";
				PostOrden(rama);
				cout<<"\n";
				system("pause");
				break;
			case 5:
				cout<<" EL RECORRIDO EN InORDEN ES : \n";
				InOrden(rama);
				cout<<"\n";
				system("pause");
				break;
			case 6:
				cout<<"*** GRACIAS *** \n";
				break;
		}
		system("cls");
	}while(opc!=6);
	
	return 0;	
}

//creando nuevo nodo
Arbol *newnodo(int num){
	Arbol *nuevo_nodo=new Arbol();
	nuevo_nodo->valor=num;
	nuevo_nodo->dere=NULL;
	nuevo_nodo->izq=NULL;	
	
	return nuevo_nodo;
}

void insertar(Arbol *&rama,int num){
	if(rama==NULL){
		Arbol *new_nodo= newnodo(num);
		rama=new_nodo;
	}
	else{
		int raiz=rama->valor;
		if(num<raiz){
			insertar(rama->izq,num);//insertar datos a la izquierda
		}
		else{
				insertar(rama->dere,num);//insertar datos a la derecha
		}
	}
}
//mostrar arbol completo
void mostrar(Arbol *rama, int cont){
	if(rama==NULL){ //si arbol vacio
		return;
	}
	else{
		mostrar(rama->dere,cont+1);
		for(int i=0;i<cont; i++){
			cout<<"  ";
		}
		cout<<rama->valor<<endl;
		mostrar(rama->izq,cont+1);
	}
}

void PostOrden(Arbol *rama){
	if(rama==NULL){// si arbol vacio
		return;
	}
	else{
		PostOrden(rama->izq);
		PostOrden(rama->dere);
		cout<<rama->valor<<" - ";
		
	}
}
void PreOrden(Arbol *rama){
	if(rama==NULL){// si arbol vacio
		return;
	}
	else{
		cout<<rama->valor<<" - ";
		PreOrden(rama->izq);
		PreOrden(rama->dere);
		
	}
}

void InOrden(Arbol *rama){
	if(rama==NULL){// si arbol vacio
		return;
	}
	else{
		InOrden(rama->izq);
		cout<<rama->valor<<" - ";
		InOrden(rama->dere);
		
	}
}
