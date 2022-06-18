#include "Pila.h"

Pila::Pila() {
	inicPila=NULL;
}

Pila::~Pila() {
	
}
void Pila::insertarEnPila(int dato){
	Nodo* nuevoNodo= new Nodo(dato);
	if (inicPila==NULL){
		inicPila=nuevoNodo;
		return;
	}/*Si el elemento va en un orden superior a 1, entonces se sigue avanzando en la función*/
	Nodo* aux=inicPila;
	while (aux->siguienteNodo!=NULL){
		aux=aux->siguienteNodo;
	}
	aux->siguienteNodo=nuevoNodo;/*Insertamos el nuevo elemento al final de la pila (encima)*/
}
void Pila::imprimirPila(){
	Nodo* aux=inicPila;
	if (inicPila==NULL){
		cout<<"La pila está vacía."<<endl;
		return; 
	}
	cout<<"Los elementos en la pila (desde la base) son: ";
	while (aux!=NULL){
		if ((aux->siguienteNodo)!=NULL){
			cout<<aux->datos<<", ";
		}
		else{
			cout<<aux->datos;
		}
		aux=aux->siguienteNodo;
	}
	cout<<endl;
}
