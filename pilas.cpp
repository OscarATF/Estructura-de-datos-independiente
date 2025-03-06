#include <iostream>

using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;
};

void mostrarDatos(Nodo *);
int contadorElementos(Nodo *,int);
void agregarPila(Nodo *&,int);
void eliminarNodo(Nodo *&);

int main () {
	Nodo *pila = NULL;
	int n;
	cout<<"Ingrese un numero: ";
	cin>>n;
	agregarPila(pila,n);
	
	cout<<"Ingrese otro numero: ";
	cin>>n;
	agregarPila(pila,n);
	
	cout<<"Ingrese otro numero: ";
	cin>>n;
	agregarPila(pila,n);

	cout<<"Ingrese otro numero: ";
	cin>>n;
	agregarPila(pila,n);

	
	cout<<endl<<"DATOS: ";
	mostrarDatos(pila);
	
	cout<<endl<<"\nLa pila tiene "<<contadorElementos(pila,0)<<" elementos"<<endl;
	
	cout<<endl<<"Eliminando ultimo elemento de la pila"<<endl;
	eliminarNodo(pila);
	cout<<endl<<"DATOS: ";
	mostrarDatos(pila);
	
	cout<<endl<<"\nLa pila tiene "<<contadorElementos(pila,0)<<" elementos"<<endl;
	
	return 0;
}

void agregarPila(Nodo *&pila, int n) {
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente=pila; //UNION AL ULTIMO NODO
	pila=nuevo_nodo; //APUNTADOR DE PILA PASA AL NUEVO NODO                       
}

void eliminarNodo(Nodo *&pila) {
	Nodo *aux=pila;
	pila=aux->siguiente;
	delete aux;
}

void mostrarDatos(Nodo *aux) {
	if (aux==NULL) {
		return; //detenerse
	} else {
		cout<<aux->dato<<" ";
		mostrarDatos(aux->siguiente);
	}
}

int contadorElementos(Nodo *aux,int n) {
	if (aux==NULL) {
		return n;
	} else {
		return contadorElementos(aux->siguiente,n+1);
	}
}
