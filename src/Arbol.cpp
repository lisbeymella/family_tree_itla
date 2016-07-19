
#include "Arbol.h"


Arbol::Arbol(Nodo* raiz)
{
	this->_raiz = raiz;
}

void Arbol::Menu()
{
	cout << "Arbol Genealogico" << endl;
	cout << "1- Crear arbol genealogico" << endl;
	cout << "2- Desplegar árbol genealógico" << endl;
	cout << "3- Salir" << endl;
	cout <<endl << "Elija una opción => ";
	cin >> opcion;
	int j = 1;
	switch(opcion)
	{
		case 1:
			cout << " Crear arbol" <<endl;
			cout << "Ingrese el nombre de la persona: ";
			cin >> raiz;
			 a = new Nodo(raiz);
			 cout << "Digite la cantidad de hijos de "<<raiz <<": ";
			 cin >> chijo;
			 		 					
			 if(chijo > 0)
			 {
				 
				 for(int i = 1; i <= chijo; i++)
				 {	
					 string nombrehijo;
					 cout << "Digite el nombre del hijo # "<<i <<" de " << raiz<< " : ";
					 cin >> nombrehijo;	
					 b = new Nodo(nombrehijo);
					 a->agregarhijo(b);
					 nombre[i] = nombrehijo;
					 
				 }
			 
					 int c, k = 1;
					 
					 for (int j = 1; j <= chijo; j++)
					 {
								
						 cout << "Digite la cantidad de hijos de "+nombre[j]+": ";
						 cin >> c;
						
						 if(c > 0){

							do{
									
									string nombrehijo;
									cout << "Digite el nombre del hijo # "<<k <<" de " << nombre[k]<< ": ";
									 cin >> nombrehijo;	
									Nodo* v = new Nodo(nombrehijo);
									 b->agregarhijo(v);
						 
									k++;
							}while (k <= c);
						 }
										
						}


								
								
							
				    }

			
			 system("cls");
			  Menu();
			break;

		case 2:
			system("cls");
			Arbol* arbl = new Arbol(a);
			arbl->recorrer(a);
			int b;
			cout <<endl<< "1 - Salir => ";
			cin >> b;

			if(b == 1){
					
			  system("cls");
			  Menu();
			}
			break;
	
	}

}

void Arbol::recorrer(Nodo* nodo)
{
	cout <<  nodo->getNombre() << endl <<endl;

	if(nodo->getNumeroHijo() > 0)
	{
		Nodo* n = nodo->getHijo();
		
		while(n != NULL)
		{
			recorrer(n);
			n = n->getSiguiente();
		}
	}
}
Arbol::~Arbol(void)
{
}
