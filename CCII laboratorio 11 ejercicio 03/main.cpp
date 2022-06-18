/*3. Implemente un algoritmo para buscar elementos de la Pila.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Pila.h"
using namespace std;

int main (int argc, char *argv[]) {
	Pila pila1;
	
	pila1.insertarEnPila(765);
	pila1.insertarEnPila(34);
	pila1.insertarEnPila(86);
	pila1.insertarEnPila(45);
	pila1.insertarEnPila(8454);
	pila1.insertarEnPila(45);
	pila1.insertarEnPila(45);
	pila1.imprimirPila();
	pila1.busqueda(45);/*Ingresamos el valor a buscar manualmente en este caso, para mayor simplicidad.*/
	return 0;
}

