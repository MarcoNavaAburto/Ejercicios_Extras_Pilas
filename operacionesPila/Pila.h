#include "Nodo.h"

using namespace std;

//Implementación de la clase Pila
class Pila
{
    private:
        Nodo *tope;
        int numElementos;

    public:
        Pila();
        ~Pila();
        void push(int valor);
        int top();
        void pop();
        int getNumElementos();
        void imprimirPila();
        bool esVacia();
};

//Constructor
Pila::Pila()
{
    tope = nullptr;
    numElementos = 0;
}

//Destructor
Pila::~Pila()
{
    Nodo *aux = tope;

    while(aux != nullptr)
    {
        tope = tope->getSiguiente();

        delete aux;

        aux = tope;
    }
}

//Agregar un elemento a la Pila
void Pila::push(int valor)
{
    Nodo *nodo = new Nodo(valor);

    if(tope == nullptr)
    {
        nodo->setSiguiente(nullptr);
        tope = nodo;
    }
    else
    {
        nodo->setSiguiente(tope);
        tope = nodo;
    }
    numElementos++;
}

//Quitar un elemento de la Pila
void Pila::pop()
{
    Nodo *aux;

    aux = tope;

    tope = tope->getSiguiente();

    delete aux;

    numElementos--;
}

//Obtener el valor del último Nodo
int Pila::top()
{
    return tope->getDato();
}

//Retorna el numero de elementos que hay en la pila
int Pila::getNumElementos()
{
    return numElementos;
}

//Imprimir los elementos de la pila
void Pila::imprimirPila()
{
    Nodo *aux;

    aux = tope;

    while(aux != nullptr)
    {
        cout<<aux->getDato()<<endl;
        aux = aux->getSiguiente();
    }
}

//Regresa true si la pila esta vacia, sino esta vacía regresa false
bool Pila::esVacia()
{
    return tope == nullptr;
}
