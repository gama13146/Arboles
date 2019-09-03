#include <iostream>
#include <conio.h>
using namespace std;
struct Tipos{
	char marca[20];
	int talla;
	char color[20];
	float Precio ;
};
struct Prendas {
	char Dama_caballero[20];
	char tipo[30];
	char accesorio[20];
	struct Tipos tip;
};

int main(){
	struct Prendas P1[7];
	struct Prendas *apuntador;
	apuntador=&P1[0];
	
	
	for(int i=0;i<1; i++){
		cout<<"Dama o Caballero: ";
		cin.getline(P1[i].Dama_caballero,20,'\n');
		cout<<"Tipo de Prenda: ";
		cin.getline(P1[i].tipo,30,'\n');
		cout<<"Accesorio: ";
		cin.getline(P1[i].accesorio,20,'\n');
		cout<<"Talla: ";
		fflush(stdin);
		cin>>P1[i].tip.talla;
	}
	

		cout<<endl<<"Dato Guardado: "<<apuntador->Dama_caballero;
		cout<<endl<<"Tipo de Prenda: "<<apuntador->tipo;
		cout<<endl<<"Accesorio: "<<apuntador->accesorio;
		cout<<endl<<"Talla: "<<apuntador->tip.talla;

	
	getch();
	return 0;
}
