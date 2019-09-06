#include <iostream>
#include <conio.h>
using namespace std;
struct Personas{
	char nombre[50];
	int tiempo;
	char revista[50];
		
};
int main(){
	struct Personas p1[10];
	struct Personas *apuntador;
	int sel;
	
	do{
		cout<<"..:::Eliga:::.. \n";
		
		cout<<"1- Ingresar Registro: \n";
		cout<<"2- Eliminar Registro: \n";
		cin>>sel;
		switch(sel)
		{
			case 1:
				cout<<"Verificar lugar: ";
			//	if(p1[0]=0);
				cout<<" Lugar desocupado Ingrese Registro: ";
				for(int i=0;i<1; i++){
					cout<<"Nombre: ";
					cin.getline(p1[i].nombre,50,'\n');
					cout<<"Tiempo: ";
					cin>>p1[i].tiempo;
					cout<<"Revista: ";
					cin.getline(p1[i].revista,50,'\n');
				//else:
				//	cout<<" Lugar ocupado: ";
				
				}
			//case 2:
			
		}
		
	}while(sel!=10);
}
