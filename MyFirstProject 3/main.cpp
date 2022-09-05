#include <iostream>
#include "myfirstclass.h"

using namespace std;

int main()
{
    MyFirstClass ob;
    MyFirstClass *p = &ob;
     p -> display();


    return 0;
}
