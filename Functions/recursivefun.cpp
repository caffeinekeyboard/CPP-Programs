#include<iostream>
using namespace std;
void fun(int x)
{
    if(x==0)
    {
        return;//This line is used to return control back to main() in a void function.
    }
    else
    {
        cout<<"GFG\n";
        fun(x-1);//Recursed.
    }
}
int main()
{
    fun(3);
    return 0;
}

