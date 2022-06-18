/*2. Sobre el ejercicio anterior, adecue el programa para eliminar elementos de una
Pila.*/
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
	pila1.imprimirPila();
	pila1.quitarElemento();
	pila1.imprimirPila();
	pila1.quitarElemento();
	pila1.imprimirPila();
	return 0;
}

