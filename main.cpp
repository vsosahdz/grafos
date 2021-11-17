#include "Grafo.hpp"

int main(){
    /*Grafo<string> * ejemplo=new Grafo<string>();  
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
    ejemplo->imprimirGrafo();  */
    Grafo<char> * ejemplo=new Grafo<char>();  
    ejemplo->insertarNodoGrafo('J');
    ejemplo->insertarNodoGrafo('I');
    ejemplo->insertarNodoGrafo('H');
    ejemplo->insertarNodoGrafo('G');
    ejemplo->insertarNodoGrafo('F');
    ejemplo->insertarNodoGrafo('E');
    ejemplo->insertarNodoGrafo('D');
    ejemplo->insertarNodoGrafo('C');
    ejemplo->insertarNodoGrafo('B');
    ejemplo->insertarNodoGrafo('A');
    ejemplo->agregarArco('A','H',0);
    ejemplo->agregarArco('A','E',0);
    ejemplo->agregarArco('A','B',0);
    ejemplo->agregarArco('B','E',0);
    ejemplo->agregarArco('B','C',0);
    ejemplo->agregarArco('B','A',0);
    ejemplo->agregarArco('C','F',0);
    ejemplo->agregarArco('C','E',0);
    ejemplo->agregarArco('C','D',0);
    ejemplo->agregarArco('C','B',0);
    ejemplo->agregarArco('D','C',0);
    ejemplo->agregarArco('I','H',0);
    ejemplo->agregarArco('E','H',0);
    ejemplo->agregarArco('E','G',0);
    ejemplo->agregarArco('E','C',0);
    ejemplo->agregarArco('E','B',0);
    ejemplo->agregarArco('E','A',0);
    ejemplo->agregarArco('F','J',0);
    ejemplo->agregarArco('F','C',0);
    ejemplo->agregarArco('G','J',0);
    ejemplo->agregarArco('G','E',0);
    ejemplo->agregarArco('H','J',0);
    ejemplo->agregarArco('H','I',0);
    ejemplo->agregarArco('H','E',0);
    ejemplo->agregarArco('H','A',0);

    ejemplo->agregarArco('J','H',0);
    ejemplo->agregarArco('J','G',0);
    ejemplo->agregarArco('J','F',0);
    ejemplo->imprimirGrafo();
    ejemplo->BreadthFirst(ejemplo->buscarNodoGrafo('A'));
    ejemplo->BreadthFirst(ejemplo->buscarNodoGrafo('E'));

}