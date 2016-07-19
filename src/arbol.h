#pragma once
#include "Nodo.h"
class Arbol
{
private:
	
	Nodo* _raiz;
	Nodo* a;
	Nodo* b;
	
	int opcion, chijo;
	string raiz,  nombre[100];
public:
	void Menu();
	void recorrer(Nodo* nodo);
	Arbol(Nodo* raiz);
	virtual ~Arbol(void);
};

