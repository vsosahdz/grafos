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
                this->nodos->agregarInicio(new NodoGrafo<T>(valor));
                this->tam++;
            }else
                cout<<"Nodo existente"<<endl;
        }

        void agregarArco(T valorNodoOrigen, T valorNodoDestino, int peso){
            //Validar la existencia de los nodos origen y destino
            NodoGrafo<T> * origen=this->buscarNodoGrafo(valorNodoOrigen);
            NodoGrafo<T> * destino=this->buscarNodoGrafo(valorNodoDestino);
            if(origen&&destino)
                origen->getArcos()->agregarInicio(new Arco<T>(valorNodoDestino,peso));
            else
                cout<<"Ambos nodos tanto origen como destino deben existir"<<endl;
        }

        void imprimirGrafo(){
            NodoT<NodoGrafo<T>*> * nodo=this->nodos->getHead();
            //Recorrer la lista de nodos
            while(nodo){
                cout<<"Nodo:"<< nodo->getDato()->getValor()<<" \n";
                NodoT<Arco<T>*> * arco = nodo->getDato()->getArcos()->getHead();
                //Recorrer la lista de arcos de cada nodo
                while(arco){
                    cout<<"->"<<arco->getDato()->getValorNodoDestino()<<":"<<arco->getDato()->getPeso()<<" ";
                    arco=arco->getSiguiente();
                }
                cout<<endl;
                nodo=nodo->getSiguiente();                
            }
            cout<<endl;
        }
};