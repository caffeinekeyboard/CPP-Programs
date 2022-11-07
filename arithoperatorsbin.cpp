#include<iostream>
using namespace std;
int main()
{
    int x=20,y=10;
    cout<<(x+y)<<"\n";//Addition operator, int and float both work. 30
    cout<<(x-y)<<"\n";//Subtraction operator, int and float both work. 10
    cout<<(x%y)<<"\n";//Remainder operator, only int works. 0
    cout<<(x*y)<<"\n";//Multiplication operator, int and float both work. 200
    return 0;
}