//
// Created by juanpr on 5/3/21.
//

#ifndef TAREA_EXTRACLASE_1_DATOS_II_NODE_H
#define TAREA_EXTRACLASE_1_DATOS_II_NODE_H
#include <cstdlib>
#include<iostream>


using namespace std;
/**
 * Clase Node que representa un dato para hacer una lista enlazada, cada dato compuesto por
 * un numero entero y un puntero al siguiente nodo
 */
class Node {
public:
    //
    int data;
    Node * next;

    Node(){
        next = nullptr;

    }
    explicit Node (int _data){
        data  = _data;
        next = NULL;

    }
    Node (int _data, Node * _next){
        data = _data;
        next = _next;

    }
    int getData(){
        return data;

    }
    Node* getNext(){
        return next;

    }
    void setData(int _data){
        data = _data;

    }
    void setNext(Node * _next){
        next = _next;

    }
    void * operator new(size_t size){

        //cout<< "Overloading new operator with size: " << size << endl;
        void * p = ::new Node();
        return p;

    }
    void operator delete(void * p){

        cout<< "Overloading delete operator " << endl;
        free(p);

    }
};
#endif //TAREA_EXTRACLASE_1_DATOS_II_NODE_H
