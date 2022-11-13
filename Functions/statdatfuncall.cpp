#include<iostream>
using namespace std;
void fun()
{
    static int x=2;//This line will not be executed again after the first call of the function, and whatever the value was set
    int y=1;       //in the latest call of the function that value shall be taken in for execution. Also static data has 
    x++;           //default value set to zero.
    y++;
    cout<<x<<" "<<y<<endl;
}
int main()
{
    fun();
    fun();
    fun();
    return 0;
}