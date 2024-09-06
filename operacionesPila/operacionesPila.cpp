#include <iostream>
#include "Pila.h"

using namespace std;


void reducirPila(int veces, Pila *pilaAyuda)
{
    int i=1;

    while(i<=veces)
    {
        pilaAyuda->pop();
        i++;
    }
}

int main()
{
    int n, numero;
    Pila *pila = new Pila();

    //Se pide el tamaño del arreglo
    cout<<"Ingrese el tamanio del arreglo: "<<endl;
    cin>>n;

    //Se crea un arreglo de tamaño n
    int arreglo[n];

    //Se llena el arreglo
    for(int i=0;i<n;i++)
    {
        cout<<"Ingrese el numero entero que guardara en la posicion "<<i<<" del arreglo: "<<endl;
        cin>>numero;

        arreglo[i] = numero;
    }

    //Se hacen las operaciones de inserción y eliminación de la pila
    for(int i=0;i<n;i++)
    {
        if(pila->getNumElementos() >= arreglo[i])
        {
            //Hacer pop en la pila arreglo[i] veces
            reducirPila(arreglo[i], pila);
        }
        else
        {
            //Se hace push en la pila con el valor arreglo[i]
            pila->push(arreglo[i]);
        }
    }

    //Se imprime la salida final
    if(pila->esVacia() == false)
    {
        cout<<"\nNumero de elementos finales en la pila: "<<pila->getNumElementos()<<endl;
        cout<<"\nLa pila queda de la siguiente manera: "<<endl;
        pila->imprimirPila();

    }
    else
        cout<<"Numero de elementos finales en la pila: "<<pila->getNumElementos()<<endl;


    //Se destruyen los nodos de la pila
    pila->~Pila();

    return EXIT_SUCCESS;
}
