
#include "Nodo.h";


Nodo::Nodo(string nombre)
{
	this->nombre = nombre;
	siguiente = NULL;
	primerHijo = NULL;
	ultimoHijo = NULL;
	hijo = 0;
}

void Nodo::agregarhijo(Nodo* hijo)
{
 	this->hijo++;
	if(primerHijo == NULL)
	{
		primerHijo = hijo;
		ultimoHijo = hijo;
	}else
	{
		ultimoHijo->siguiente = hijo;
		ultimoHijo = hijo;
	}

}



int Nodo::getNumeroHijo()
{
	return this->hijo;
}


Nodo* Nodo::getHijo()
{
	return primerHijo;
}

Nodo::~Nodo()
{

}
		
