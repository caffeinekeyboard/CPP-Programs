#include<iostream>
using namespace std;
int main()
{
    bool a = true;
    bool b = false;
    cout<<a<<"\n";//1
    cout<<b<<"\n";//0
    cout<<std::boolalpha;//Once this flag has been set, everytime a bool value is to be printed on the terminal, instead of
    cout<<a<<"\n";//true       //printing 0 or 1 it will print false or true repsectively.
    cout<<b<<"\n";//false
    cout<<std::noboolalpha;//The flag has been unset and the values will return to be printed as 0 or 1 like before.
    cout<<a<<"\n";//1
    cout<<b<<"\n";//0
    return 0;
}