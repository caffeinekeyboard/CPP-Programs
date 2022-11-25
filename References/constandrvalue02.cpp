#include<iostream>
using namespace std;
void fun(string &&s)
{
    cout<<s;
}
int main()
{
    fun("user");//The string did not have to be iniotialised before the usage inside function it was directly passed.
    return 0;
}