#include <iostream>
#include "LinkedList.h"
int main() {

    LinkedList * myList =  new LinkedList();

    myList->addFront(1);
    myList->addFront(2);
    myList->addFront(3);
    myList->addFront(4);
    myList->addFront(5);
    myList->printList();
    return 0;
}
