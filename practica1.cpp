#include <iostream>
using namespace std;
struct Personas {
	char nombre[20];
	int edad;
} persona1,persona2;

int main(int argc,char** argv){
	cout<<"Nombre: ";
	cin.getline(persona2.nombre,20,'\n');
	cout<<"Edad: ";
	cin>>persona2.edad;
	cout<<persona2.nombre<<endl;
	cout<<persona2.edad<<endl;
	system("pause");
	return 0;
}

