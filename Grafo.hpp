#include "NodoGrafo.hpp"

template <typename T>
class Grafo{
    int tam;
    ListaSimple<NodoGrafo<T> *> * nodos;
    public:
        Grafo(){
            this->tam=0;
            this->nodos=new ListaSimple<NodoGrafo<T>*>();
        }
        NodoGrafo<T> * buscarNodoGrafo(T valor){
            NodoT<NodoGrafo<T>*> * actual=this->nodos->getHead();
            while(actual){
                //Busqueda del valor dentro de los nodos
                if(actual->getDato()->getValor()==valor)
                    return actual->getDato();
                actual=actual->getSiguiente();
            }
            return nullptr;            
        }    

        void insertarNodoGrafo(T valor){
            //Si el nodo no existe
            if(!this->buscarNodoGrafo(valor)){
                this->nodos->agregarInicio(new NodoGrafo(valor));
                this->tam++;
            }else
                cout<<"Nodo existente"<<endl;
        }
};