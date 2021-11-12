#include "Arco.hpp"
#include "ListaSimple.hpp"

template <typename T>
class NodoGrafo{
    T valor;
    ListaSimple<Arco<T>*> * arcos;
    public:
        T getValor(){return this->valor;}
        ListaSimple<Arco<T>*> * getArcos(){return this->arcos;}
        NodoGrafo(T valor){
            this->valor=valor;
            this->arcos=new ListaSimple<Arco<T>*>();
        }
};