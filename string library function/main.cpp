#include <iostream>
#include<conio.h>
#include<cstring>

using namespace std;

int main()
{
    char name1[]="Sharear";
    char name2[]="sharear";
    int value = strcmp(name1,name2);
    if(value == 0)
        cout<<"String are equal";
    else
        cout<<"String are not equal";

    /*char name[]="Sharear";
    strlwr(name);
    cout<<name;*/


    /*char name[]="Sharear";
    strupr(name);
    cout<<name;*/

    /*
    char name1[]="Sharear";
    char name2[10];
    int len= strlen(name1);
    cout<<"Lent is : "<<len<<endl;*/

    /*char name1[]="Sharear";
    char name2[]=" Ahammed";
    strcpy(name2,name1);
    cout<<"Name 2 "<<name2<<endl;*/

   /* strcat(name1,name2);
    cout<<name1;*/




    getch();
}
