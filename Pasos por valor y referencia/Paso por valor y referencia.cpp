#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>
using namespace std;

int ackerman(int a, int b);
void inverso(double& c);

int main(){
	int num1,num2,opc;
	double num3;
	do{
	
		cout<<"....:::Elija una Opcion del Menu :::...."<<endl;
		cout<<endl;
		cout<<"1. Paso por Valor"<<endl;
		cout<<"2. Paso por Referencia"<<endl;
		cout<<"3. Salir"<<endl;
		cin>>opc;
		switch(opc){
			case 1:
				cout<<"....::Ackerman::...."<<endl;
				cout<<endl;
				cout<<" Ingresa el primer valor: "<<endl;
				cin>>num1;
				cout<<"Ingresa el segundo valor:"<<endl;
				cin>>num2;
				cout<<"Ackerman("<<num1<<","<<num2<<")="<<ackerman(num2,num1)<<endl;
			break;
			case 2:
				cout<<"....::Inverso de Un Numero::...."<<endl;
				cout<<endl;
				cout<<"Ingrese un Numero:"<<endl;
				cin>>num3;
				cout<<"El Inverso de" << num3 <<" es: ";
				inverso(num3);
				cout<<endl;
			break;
			case 3:
				cout<<"..::Saliendo::.."<<endl;
				cout<<"...Gracias.."<<endl;
		}
	}while(opc!=3);
return 0;
}

int ackerman(int a, int b){
	if(!a){
		return (b+1);}
	else if(!b){
		return (ackerman(a-1,1));
	}
	else{
		return (ackerman(a-1, ackerman(a,b-1)));
	}
	
}

void inverso( double& c){
	int d;
	c=c/10;
	d=floor(c);
	c=fabs(d-c);
	cout<<c*10;
	
	c=d;
	if(c!=0){
		inverso(c);
	}
}

