#include "iostream"
#include <string>

using namespace std;

class Nodo{

	private:
		Nodo* siguiente;
		Nodo* primerHijo;
		Nodo* ultimoHijo;
		string nombre;
		int hijo;

	public:
		void agregarhijo(Nodo* hijo);
		Nodo* getHijo();
		Nodo(string nombre);
		virtual ~Nodo();

		int getNumeroHijo();

		void setSiguiente(Nodo* &siguiente)
		{
			this->siguiente = siguiente;
		}

		void setHijo(int hijo)
		{
			this->hijo = hijo;
		}

		void setNombre(string nombre)
		{
			this->nombre = nombre;
		}

		const string &getNombre() const
		{
			return nombre;
		}

		 Nodo* &getSiguiente() 
		{
			return siguiente;
		}

		const int &getHijo() const
		{
			return hijo;
		}


};
