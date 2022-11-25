#include<iostream>
using namespace std;
int &fun()//The amphersand is basically giving reference to whatever this function returns when called.
{
    static int x=10;//This variable will be alive even after the the function has ended and removed from call stack. If the keyword
                    //static weren't there then there would be a compiler error.
    return x;
} 
int main()
{
    int &y=fun();
    y=20;//Now a change is made to the variable x that is still alive even after calling of the parent function.
    cout<<fun();
    return 0;
}