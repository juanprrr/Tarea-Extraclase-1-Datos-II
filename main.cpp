#include <iostream>
#include "LinkedList.h"
int main() {

    LinkedList * myList =  new LinkedList();

    myList->push(1);
    myList->push(2);
    myList->push(3);
    myList->push(4);
    myList->printList();
    myList->deleteData(4);
    myList->push(5);
    myList->printList();
    myList->deleteData(2);
    myList->printList();
    myList->push(6);
    myList->printList();
    return 0;
}
