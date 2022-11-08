#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int y = x++;//y = x and then x = x+1.
    int z = ++x;//x = x+1 and then z = x.
    cout<<x<<" "<<y<<" "<<z;//12 10 12
    return 0;
}