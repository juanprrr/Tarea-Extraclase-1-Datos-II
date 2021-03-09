//
// Created by juanpr on 5/3/21.
//

#ifndef EXTRA_CLASE_I_NODE_H
#define EXTRA_CLASE_I_NODE_H
#include <cstdlib>


class Node {
public:
    //
    int data;
    Node * next;

    Node(){
        data = 0;
        next = NULL;

    }
    Node (int _data){
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
};


#endif //EXTRA_CLASE_I_NODE_H
