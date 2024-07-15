#include <iostream>
using namespace std;
struct empleados{
		float sueldo;
		char nombres[20];
		char sexo[10];
	};
int main(){
	empleados empleado[20];
	int n,i,menor,mayor,me,ma;
	menor=empleado[1].sueldo=0;
	mayor=0;
	cout<<"Ingrese el numero de empleados de la compania DataTech: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Datos del "<<i<<" empleado: "<<endl;
		cout<<"-Nombres: "; cin>>empleado[i].nombres;
		cout<<"-Sexo: "; cin>>empleado[i].sexo;
		cout<<"-Sueldo: "; cin>>empleado[i].sueldo;
		if((empleado[i].sueldo)<menor){
			menor=empleado[i].sueldo;
			me=i;
		}
		if((empleado[i].sueldo)>mayor){
			mayor=empleado[i].sueldo;
			ma=i;
		}
	}
	cout<<"El empleado con menor sueldo es: "<<endl;
	cout<<"-Nombres: "<<empleado[me].nombres<<endl;
	cout<<"-Sexo: "<<empleado[me].sexo<<endl;
	cout<<"-Sueldo: "<<empleado[me].sueldo<<endl;
	cout<<"Y El empleado con mayor sueldo es: "<<endl;
	cout<<"-Nombres: "<<empleado[ma].nombres<<endl;
	cout<<"-Sexo: "<<empleado[ma].sexo<<endl;
	cout<<"-Sueldo: "<<empleado[ma].sueldo<<endl;
	return 0;
}
