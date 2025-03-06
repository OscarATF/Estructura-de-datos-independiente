#include <iostream> 

using namespace std;

class Carro{
	public:
		string color;
		string motor;
};

int main() { 
	int numero=27; // &numero ; direccion de memoria del numero
	int *puntero=NULL; // el puntero no apunta a nada
	puntero=&numero; // la variable tipo puntero establece el dato de la direccion del numero 
	cout<<*puntero; // se muestra el dato de la variable numero
	cout<<endl<<puntero<<endl; // se muestra la direccion de memoria apuntada
	cout<<&numero<<endl; // direccion de memoria de numero
	cout<<endl<<"PRUEBA 2"<<endl;
	
	Carro car;
	car.color="Rojo";
	car.motor="800cc";
	
	Carro *pCar=NULL; //Apuntador tipo Carro apunta a NULL
	pCar=&car; //puntero Car obtiene los atributos del objeto car mediante su direccion de memoria
	cout<<pCar->motor<<endl;
	
	Carro *carros= new Carro[2];
	
	carros[0].color="azul";
	carros[0].motor="1000cc";
	carros[1].motor="1200cc";
	carros[1].color="Verde";
	
	cout<<"\nArreglo de carros: "<<endl;
	
	for (int i=0;i<2;i++) {
		cout<<"COLOR: "<<carros[i].color<<endl;
		cout<<"MOTOR: "<<carros[i].motor<<endl;
	}
	
	string marca="HYUNDAI";
	string *pMarca=&marca;
	
	cout<<endl<<*pMarca<<endl;
	cout<<pMarca<<endl;
	
	
}