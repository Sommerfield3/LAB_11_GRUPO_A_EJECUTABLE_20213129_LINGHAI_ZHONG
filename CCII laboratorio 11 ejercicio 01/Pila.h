#ifndef PILA_H
#define PILA_H
#include "Nodo.h"
class Pila {
	Nodo* inicPila;
public:
	Pila();
	~Pila();
	void insertarEnPila(int dato);
	void imprimirPila();
};

#endif

