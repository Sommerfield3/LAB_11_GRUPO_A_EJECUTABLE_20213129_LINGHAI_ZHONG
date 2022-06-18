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
void Pila::quitarElemento(){
	Nodo *aux1=inicPila;
	Nodo *aux2=NULL;
	if (inicPila==NULL){
		cout<<endl<<"Nada que borrar, pila vacía."<<endl;
		return;
	}
	else if (inicPila->siguienteNodo==NULL){
		inicPila=NULL;
		delete inicPila;
		return;
	}
	while (true){
		aux2=aux1;
		aux1=aux1->siguienteNodo;/*Avanzamos una posición.*/
		if(aux1->siguienteNodo==NULL){
			break;
		}
	}
	aux2->siguienteNodo=NULL;
	delete aux1;
}
bool Pila::busqueda(int buscado){
	Nodo *aux1=inicPila;
	Nodo *aux2=NULL;
	int conteo=0;
	if (inicPila==NULL){
		cout<<endl<<"Pila vacía."<<endl;
		return false;
	}
	else if (inicPila->siguienteNodo==NULL){
		if (aux1->datos==buscado){
			cout<<endl<<"El número "<<buscado<<" se encuentra en la pila."<<endl;
			return true;
		}
		cout<<endl<<"El número "<<buscado<<" no se encuentra en la pila."<<endl;
		return false;
	} 
	if (aux1->datos==buscado){
		conteo++;
	}
	while (true){
		aux2=aux1;
		aux1=aux1->siguienteNodo;
		if (aux1->datos==buscado){
			conteo++;
		}
		if(aux1->siguienteNodo==NULL){
			break;
		}
	}
	if (conteo==1){
		cout<<endl<<"El número "<<buscado<<" se encuentra en la pila."<<endl;
		return true;
	}
	else if (conteo>1){
		cout<<endl<<"El número "<<buscado<<" se encuentra en la pila un total de "<<conteo<<" veces."<<endl;
		return true;
	}
	else{
		cout<<endl<<"El número "<<buscado<<" no se encuentra en la pila."<<endl;
		return false;
	}
}
