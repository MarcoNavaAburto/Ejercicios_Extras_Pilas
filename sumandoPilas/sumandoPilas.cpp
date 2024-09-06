#include<iostream>
#include "Pila.h"

using namespace std;

int main()
{
    //Creación de una pila
    Pila *pila1 = new Pila();

    //Declaración de variables
    int otro=1, opcion;
    int numero;
    int num1, num2, suma;

    //Impresión del menú de opciones
    cout<<"Menu del juego sumando con pilas"<<endl;

    while(otro == 1)
    {
        cout<<"\nOpcion\tAccion a realizar"<<endl;
        cout<<"\n1\tAgregar un numero a la pila\n2\tConsumir los ultimos 2 topes de la pila, sumarlos y agregar ese resultado a la pila\n3\tImprimir el tope de la pila\n4\tSalir del juego"<<endl;
        cout<<"\nIngrese la opcion de la accion que desea realizar: "<<endl;
        cin>>opcion;

        switch(opcion)
        {
            case 1:
                cout<<"\nIngrese el numero que quiere ingresar a la pila: "<<endl;
                cin>>numero;

                pila1->push(numero);

                break;

            case 2:
                if(pila1->getNumElementos()>=2)
                {
                    num1 = pila1->top();
                    pila1->pop();

                    num2 = pila1->top();
                    suma = num1 + num2;

                    pila1->pop();
                    pila1->push(suma);

                    cout<<"\nLa operacion se ha realizado con exito"<<endl;
                }
                else
                    cout<<"\nLa pila necesita tener por lo menos 2 elementos para hacer esta operacion y la pila tiene "<<pila1->getNumElementos()<<endl;

                break;

            case 3:
                    if(pila1->getNumElementos() == 0)
                        cout<<"\nNo hay ningun elemento en la pila"<<endl;
                    else
                        cout<<"\nTope de la pila: "<<pila1->top()<<endl;

                break;

            case 4:
                otro = 2;
                break;

            default:
                cout<<"\nFavor de ingresar una opcion que sea valida"<<endl;
                break;
        }

    }

    //Se destruyen todos los nodos de la pila
    pila1->~Pila();

    return EXIT_SUCCESS;
}
