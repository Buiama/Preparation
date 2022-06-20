#include <iostream>
#include "Queue.h"

int main()
{
    srand(time(0));
    Queue queue;

    queue.generate(10, 0, 10);
    queue.print();

    queue.deleteFirst();
    queue.print();

    queue.addLast(100);
    queue.print();
}
