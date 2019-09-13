#include <iostream>
#include <conio.h>
#include<string.h>
#include<locale>
using namespace std;
struct Personas{
	int tiempo;
	char nombre[30];
	char revista[30];
		
};
int main()
{
	char *locale;
    locale=setlocale(LC_ALL,"");
	struct Personas p1[10];
	struct Personas *puntero;
	puntero=p1;
	char elimin[30];
	int sel,n;
	for (int i=0; i>=10; i++)
		p1[i].nombre[0]='n';
	do{
		cout<<"..:::Eliga:::.. \n";
		cout<<"1- Ingresar Registro: \n";
		cout<<"2- Eliminar Registro: \n";
		cout<<"3- Mostrar Registro: \n";
		cout<<"4- Salir \n";
		cin>>sel;
		switch(sel)
		{
			case 1:
				for(int i=0;i<10; i++){
					if (p1[i].nombre[0]=='n'){
						cout<<"Nombre: ";
						fflush(stdin);
						cin.getline(p1[i].nombre,30,'\n');
						cout<<"Tiempo: ";
						cin>>p1[i].tiempo;
						cout<<"Revista: ";
						fflush(stdin);
						cin.getline(p1[i].revista,30,'\n');
						cout<<'/n';
						break;
						}else 
							cout<<"Lugar "<<i+1<<"Ocupado " <<endl;
			}break;
			case 2:
				cout<<"inserte nombre a buscar:";
                cin.getline(elimin,30,'\n');
				for(int i=0;i<10; i++){
					n=strcmp(puntero->nombre,elimin);
					if(n!=0)
						puntero++;
					else{
						p1[i].nombre[0]=='n';
						cout<<"usuario eliminado ";
						break;
					}
				}
				break;
				case 3:
					for(int i=0;i<1; i++){
						cout<<endl<<"..::Datos Guardados::.. ";
						cout<<endl<<"Nombre: "<<puntero->nombre<<endl;
						cout<<endl<<"Tiempo de Suscripcion: "<<puntero->tiempo<<endl;
						cout<<endl<<"Revista: "<<puntero->revista<<endl;
					}
					break;
					case 4:
						cout<<"...:::Salir:::...";
						break;
						 default:
		 					cout<<"Número Invalido"<<endl;
		 				}
	}while(sel!=4);
	return 0;
}
