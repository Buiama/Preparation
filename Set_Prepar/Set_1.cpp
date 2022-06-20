#include <iostream>
#include "Set.h"

int main()
{
    srand(time(0));
    Set set;

    set.generate(10, 0, 100);

    set.addValue(50);
    set.addValue(55);

    set.deleteValue(55);
    set.deleteValue(60);

    set.print();

    std::cout << set.getSize() << " " << set.find(50) << " " << set.find(95);
}
