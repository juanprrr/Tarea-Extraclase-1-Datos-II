//
// Created by juanpr on 10/3/21.

#include <iostream>
#include "Collector.h"

using namespace std;
//Método que agrega nodos al colector cuando son borrados
void Collector::collectSpace(Node * _node) {
    if (head == nullptr){
        head = _node;
    }
    else{
        Node * tmp = _node;
        tmp->next = head;
        head = tmp;
    }

}
Node* Collector::giveSpace(int _data) {
    if (head == nullptr){
        return new Node(_data);
    }
    else{
        Node * tmp = head;
        this->head = head->next;
        tmp->setData(_data);
        return tmp;
    }
}
bool Collector::isEmpty() {
    return head == nullptr;
}
void Collector::printCollector() {
    if (!isEmpty()){
        Node * tmp = head;
        while (tmp != nullptr){
            cout <<"value: "<< tmp->data<<endl;
            cout <<"Address: " << &(tmp->data) <<endl;
            tmp = tmp->next;
        }
        cout << endl;
    }
    else
        cout <<"Empty list"<< endl;
}
