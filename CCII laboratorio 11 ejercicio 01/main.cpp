/*1. Defina una Pila que permita insertar elementos utilizando clases.*/
/*Apellidos y Nombres: Zhong Callasi, Linghai Joaquin*/
#include<iostream>
#include "Pila.h"
using namespace std;

int main (int argc, char *argv[]) {
	Pila pila1;
	pila1.insertarEnPila(342);
	pila1.insertarEnPila(64);
	pila1.insertarEnPila(898);
	pila1.insertarEnPila(75);
	pila1.insertarEnPila(110);
	pila1.imprimirPila();
	return 0;
}

