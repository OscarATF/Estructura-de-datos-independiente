#include <iostream>
using namespace std;

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

void insertarCola(Nodo*&,Nodo*&,int);
bool cola_vacia(Nodo*);
void mostrarDatos(Nodo*);
void suprimirCola(Nodo*&,Nodo*&,int&);
	
int main() {
	Nodo *frente=NULL;
	Nodo *fin=NULL;
	
	int dato;
	
	cout<<"Ingrese 5 numeros: "<<endl;
	for (int i=0;i<5;i++) {
		cin>>dato;
		insertarCola(frente,fin,dato);
	}
	cout<<"Los datos de la cola son: ";
	mostrarDatos(frente);
	cout<<endl<<"\nEliminando el primer elemento..."<<endl;
	suprimirCola(frente,fin,dato);
	cout<<"\nSe a eliminado el nodo de dato "<<dato<<" de la cola"<<endl;
	cout<<"\nLos datos de la cola son: ";
	mostrarDatos(frente);
	return 0;
}
	
void insertarCola(Nodo *&frente,Nodo *&fin,int n) {
	Nodo *nuevo_nodo=new Nodo();
	
	nuevo_nodo->dato=n;
	nuevo_nodo->siguiente=NULL;
	
	if (cola_vacia(frente)) {
		frente=nuevo_nodo;
	} else {
		fin->siguiente=nuevo_nodo;
	}
	
	fin=nuevo_nodo;
}

bool cola_vacia(Nodo *frente) {
	return (frente==NULL) ? true:false;
	/*
	//forma tradicional
	if (frente==NULL) {
		return true;
	} else {
		return false;
	}
	*/
}

void suprimirCola(Nodo *&frente,Nodo *&fin,int &n) {
	n=frente->dato;
	Nodo *aux=frente;
	
	if (frente==fin) {
		frente=fin=NULL;
	} else {
		frente=frente->siguiente;
	}
	delete aux;
}

void mostrarDatos(Nodo *frente) {
	if (frente==NULL) {
		return;
	} else {
		cout<<frente->dato<<" ";
		mostrarDatos(frente->siguiente);
	}
}

