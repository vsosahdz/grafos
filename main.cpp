#include "Grafo.hpp"

int main(){
    Grafo<string> * ejemplo=new Grafo<string>();  
    ejemplo->insertarNodoGrafo("CDMX");
    ejemplo->insertarNodoGrafo("GDL");
    ejemplo->insertarNodoGrafo("OAX");
    ejemplo->insertarNodoGrafo("MZT");
    ejemplo->insertarNodoGrafo("MTY");
    ejemplo->insertarNodoGrafo("MEX");
    ejemplo->agregarArco("MEX","CDMX",30);
    ejemplo->agregarArco("MEX","OAX",300);
    ejemplo->agregarArco("OAX","GDL",2000);
    ejemplo->agregarArco("GDL","MTY",1000);
    ejemplo->imprimirGrafo();  
}