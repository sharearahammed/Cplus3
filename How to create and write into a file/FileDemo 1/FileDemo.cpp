#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream file;
    file.open("student.txt");
    file<<"My name is Sharear Ahammed Nihal.I am 21 years old.I am from Dhaka. \n";
    file.close();





    getch();
}
