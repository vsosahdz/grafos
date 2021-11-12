template <typename T>
//Representa el arco de un nodo origen a un nodo destino con su peso
class Arco{
    T valorNodoDestino;
    int peso;
    public:
        int getPeso(){return this->peso;}
        T getValorNodoDestino(){return this->ValorNodoDestino;}
        //Agregar metodos sets
        Arco(T valorNodoDestino,int peso){
            this->valornodoDestino=valornodoDestino;
            this->peso=peso;
        }
};