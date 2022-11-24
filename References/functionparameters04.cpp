#include<iostream>
using namespace std;
void fun(const string &s)//Usig of const is a standard practice for strings for faster compilation, but program will compile and run 
                         //equally if const is not used. 
{
    cout<<s;
}
int main()
{
    string s = "GeeksforGeeks";
    fun(s);
    return 0;
}
