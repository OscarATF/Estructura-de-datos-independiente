#include <iostream>
using namespace std;

class Nodo{
	public:
		int dato;
		Nodo *siguiente;
};

void agregar_nodo(Nodo*&,int);
void mostrarDatos(Nodo*);

int main() {
	Nodo *lista=NULL;
	int n;
	cout<<"Ingrese 10 numeros: "<<endl;
	for (int i=0;i<10;i++) {
		cin>>n;
		agregar_nodo(lista,n);
	}
	cout<<"DATOS: ";
	mostrarDatos(lista);
}

void agregar_nodo(Nodo *&lista, int n) {
	Nodo *nuevo_nodo= new Nodo();
	nuevo_nodo->dato=n;
	
	Nodo *aux1=lista;
	Nodo *aux2;
	
	while((aux1!=NULL) && (aux1->dato<n)) {
		aux2=aux1;
		aux1=aux1->siguiente;
	}
	
	if (lista==aux1) {
		lista=nuevo_nodo;
	} else {
		aux2->siguiente=nuevo_nodo;
	}
	
	nuevo_nodo->siguiente=aux1;
}

void mostrarDatos(Nodo* aux) {
	if (aux!=NULL) {
		cout<<aux->dato<<" ";
		mostrarDatos(aux->siguiente);
	} else {
		return;
	}
}