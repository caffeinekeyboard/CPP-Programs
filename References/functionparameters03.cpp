#include<iostream>
using namespace std;
void fun(int &x)
{
    x=x+5;
}
int main()
{
    int x=10;
    fun(x);
    cout<<x;//15 Now the value will be reflected because x in fun and x in main are labeling the same memory.
    return 0;
}