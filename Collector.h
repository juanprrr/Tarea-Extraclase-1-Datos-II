//
// Created by juanpr on 10/3/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_COLLECTOR_H
#define TAREA_EXTRACLASE_1_DATOS_II_COLLECTOR_H
#include "Node.h"
/**
 * Clase Collector que se encarga de reciclar el espacio usado por nodos que se borran de una lista enlazada
 */
class Collector {
public:
    Node * head;
    Collector(){
        this->head = nullptr;
    }
    Collector(Node * _node){
        this->head = _node;
    }
    void collectSpace(Node * _recycle);
    Node * giveSpace(int _data);
    void printCollector();
    bool isEmpty();


};


#endif //TAREA_EXTRACLASE_1_DATOS_II_COLLECTOR_H
