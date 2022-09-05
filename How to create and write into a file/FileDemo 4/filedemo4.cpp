#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string line;

    ifstream file("Details.txt");
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();


    getch();
}
