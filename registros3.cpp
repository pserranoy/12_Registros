#include <iostream>
using namespace std;
struct persona{
		int dia;
		char nombres[20];
		int mes;
		int a;
	};
int main(){
	persona personas[20];
	int n,i,m=1;
	cout<<"Ingrese cuantas personas se desea registrar: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Datos del "<<i<<" persona: "<<endl;
		cout<<"-Nombres: "; cin>>personas[i].nombres;
		cout<<"-Dia: "; cin>>personas[i].dia;
		cout<<"-Mes: "; cin>>personas[i].mes;
		cout<<"-Año: "; cin>>personas[i].a;
	}
	cout<<"Ingrese un mes del año para mostrar las personas que cumplan ese mes: "<<endl;
	while(m!=0){
		cin>>m;
	    for(i=1;i<=n;i++){
		    if(m==personas[i].mes){
		        cout<<"Datos de la "<<i<<" persona: "<<endl;
		        cout<<"-Nombres: "<<personas[i].nombres<<endl;
		        cout<<"-Dia: "<<personas[i].dia<<endl;
		        cout<<"-Mes: "<<personas[i].mes<<endl;
		        cout<<"-Año: "<<personas[i].a<<endl;
		    }
	    }
	}
	return 0;
}