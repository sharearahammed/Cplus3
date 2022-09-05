#include <iostream>
#include<conio.h>
#include<string>
using namespace std;

int main()
{
    string str1="Sharear";
    string str2=" Ahammed";
    string str3;

    str3=str1;
    cout<<"String 3 is "<<str3<<endl;

    str3 = str1 + str2;
    cout<<"Str1 + Str2 = "<<str3<<endl;

    int len = str1.size();
    cout<<"Length of string "<<len;

    getch();
}
