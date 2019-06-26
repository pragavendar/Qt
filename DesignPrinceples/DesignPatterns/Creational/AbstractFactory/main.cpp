#include <iostream>
#include "guifactory.h"


using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    IAbstractFactory *fact = new Buttonfactory();

    IButton *b  = fact->getButton(OSTYPE::WINDOWS);
    b->print();
    return 0;
}
