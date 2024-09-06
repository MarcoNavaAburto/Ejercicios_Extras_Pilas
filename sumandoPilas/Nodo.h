//Implementación de la clase Nodo
class Nodo{
    private:
        int dato;
        Nodo *siguiente;

    public:
        Nodo(int valor);
        ~Nodo();
        int getDato();
        Nodo *getSiguiente();
        void setSiguiente(Nodo *aux);

};

//Constructor
Nodo::Nodo(int valor)
{
    dato = valor;
    siguiente = nullptr;
}

//Destructor
Nodo::~Nodo(){

}

//Retornar el dato que guarda el Nodo
int Nodo::getDato()
{
    return dato;
}

//Retorna el siguiente Nodo
Nodo* Nodo::getSiguiente()
{
    return siguiente;
}

//Establece un enlace
void Nodo::setSiguiente(Nodo *aux)
{
    siguiente = aux;
}
