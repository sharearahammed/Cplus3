#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    for(int i=1; i<=4; i++)
    {

        string name;
        int age;
        ofstream file;
        file.open("Student_details.txt",ios::out|ios::app);

        cout<<"Enter your name : ";
        getline(cin,name);
        file<<name<<"\t";

        cout<<"Enter your age : ";
        cin>>age;
        file<<age<<endl;
        cin.ignore();

    }

    getch();
}
