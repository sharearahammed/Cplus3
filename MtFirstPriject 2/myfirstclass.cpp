#include "myfirstclass.h"
#include<iostream>
using namespace std;

MyFirstClass :: MyFirstClass()
{
    cout<<"Constructor is called"<<endl;
}
MyFirstClass :: ~MyFirstClass()
{
    cout<<"Distructor is Called"<<endl;
}
void MyFirstClass :: display()
{
    cout<<"Display is"<<endl;
}
