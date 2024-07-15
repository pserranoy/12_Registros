#include <iostream>
using namespace std;
struct atleta{
		char pais[20];
		char nombres[20];
		char disciplina[20];
		int medallas;
	};
int main(){
	atleta atletas[20];
	int mpais;
	int n,mayor,ma,i;
	int p;
	cout<<"Ingrese el numero de atletas: "; cin>>n;
	for(i=1;i<=n;i++){
		cout<<"Datos del "<<i<<" atleta: "<<endl;
		cout<<"-Nombres: "; cin>>atletas[i].nombres;
		cout<<"-Pais: "; cin>>atletas[i].pais;
		cout<<"-Disciplina: "; cin>>atletas[i].disciplina;
		cout<<"-N._De_Medallas: "; cin>>atletas[i].medallas;
	}
	cout<<"Ingrese un pais: ";
	cin>>p;
	mpais=0;
	for(i=1;i<=n;i++){
		if(p==atletas[i].pais){
			cout<<"Coincidencia con el "<<i<<" atleta: "<<endl;
		    cout<<"-Nombres: "<<atletas[i].nombres<<endl;
		    cout<<"-Pais: "<<atletas[i].pais<<endl;
		    cout<<"-Disciplina: "<<atletas[i].disciplina<<endl;
		    cout<<"-N._De_Medallas: "<<atletas[i].medallas<<endl;
		    if(atletas[i].medallas>mpais){
		    	mpais=i;
			}
		}
	}
	cout<<"El atleta con mayor numero de medallas de "<<p<<" es: "<<atletas[mpais].nombres<<endl;
	return 0;
}
	
	
