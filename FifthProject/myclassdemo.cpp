#include "myclassdemo.h"
#include<iostream>
using namespace std;

void MyClassDemo :: display1 ()const
{
    cout<<"I am a Constant function "<<endl;
}
void MyClassDemo :: display2 ()
{
    cout<<"Non-Constant function "<<endl;
}

