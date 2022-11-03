#include<iostream>
#include<typeinfo>//This library contains the 'typeid()' function used in the main function.
using namespace std;
int main()
{
    auto a = 10.1;//Despite this value being more suitable to be stored as a float (to save memory) the compiler stores it as a double 'd' as the auto keyword forces the compiler to recognise the data type on its own.
    auto b = 5;//The compiler recognises this as an integer and stores it accordingly.
    cout<<a<<" "<<b<<endl;
    cout<<typeid(a).name()<<endl;//The name() function is used to denote the data type by its first letter e.g.) boolean -> 'b'.
    cout<<typeid(b).name();
    return 0;
}