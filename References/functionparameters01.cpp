#include<iostream>
using namespace std;
void fun(int x)
{
    x=x+5;
}
int main()
{
    int x=10;
    fun(x);
    cout<<x;//10 No change reflected in the value of x because a x in fun and x in main are two different variables, pointing at two
            //different memory locations.
    return 0;
}