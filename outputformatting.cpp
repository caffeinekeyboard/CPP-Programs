#include<iostream>
#include<iomanip>//New library containing setw(), setfill(), etc.
using namespace std;
int main()
{
    int a = 12;
    cout<<a<<"\n";//Normal print. //12
    cout<<std::setw(5);//The output will be printed on far right of five spaces eg. _ _ _ 1 2.
    cout<<std::setfill('*');//The output will fill '*' in all empty spaces not filled by output characters.
                            //This flag need not be reset everytime an output is printed, it works throughout.
    cout<<a<<"\n";//***12
    cout<<std::setw(5);//This flag of setw() needs to be reset everytime a new output needs to be printed.
    cout<<"Geek"<<"\n";//*Geek
    cout<<std::setw(5);
    cout<<"Geeks"<<"\n";//Geeks (all the spaces are filled by output itself so no '*' is there.) //Geeks
    cout<<std::setw(5);
    cout<<"GeeksforGeeks";//The output exceeds width so it will also be printed without any '*'. //GeeksforGeeks
    return 0;
}