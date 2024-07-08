#include <iostream>
using namespace std;
struct persona{
		int DNI;
		char nombres[20];
		int edad;
	};
int main(){
	persona personas[20];
	int n,prom=0,i;
	float promedio;
	int mayor=0;
	cout<<"Ingrese a cuantas personas se desea ingresar: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Datos del "<<i<<" persona: "<<endl;
		cout<<"-Nombres: "; cin>>personas[i].nombres;
		cout<<"-DNI: "; cin>>personas[i].DNI;
		cout<<"-Edad: "; cin>>personas[i].edad;
		if(personas[i].edad>=50){
			mayor=mayor+1;
		}
		prom=prom+personas[i].edad;
	}
	promedio=prom/n;
	cout<<"la cantidad de personas mayores a 50 años son: "<<mayor<<endl;
	cout<<"El promedio de las edades ingresadas son: "<<promedio<<endl;
	cout<<"Datos de las personas ingresadas: "<<endl;
	for(i=1;i<=n;i++){
		cout<<"Datos de la "<<i<<" persona: "<<endl;
		cout<<"-Nombres: "<<personas[i].nombres<<endl;
		cout<<"-DNI: "<<personas[i].DNI<<endl;
		cout<<"-Edad: "<<personas[i].edad<<endl;
	}
	return 0;
}