

#include "Arbol.h"


int main()
{

	Nodo* c = new Nodo("A");
	Arbol* v = new Arbol(c);
	v->Menu();

	/*Nodo* a = new Nodo("A");
	Nodo* b = new Nodo("B");
	Nodo* c = new Nodo("C");
	Nodo* e = new Nodo("E");
	Nodo* f = new Nodo("F");
	Nodo* g = new Nodo("G");
	Nodo* h = new Nodo("H");
	a->agregarhijo(b);
	a->agregarhijo(c);
	
	c->agregarhijo(e);
	c->agregarhijo(f);

	e->agregarhijo(h);

	f->agregarhijo(g);

	Arbol* arbl = new Arbol(a);
	arbl->recorrer(a);*/

	system("pause");
	return 0;
}
