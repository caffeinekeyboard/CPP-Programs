#include<iostream>
using namespace std;
int main()
{
    int x = 3;
    cout<<(x<<1)<<endl;//6
    cout<<(x<<2)<<endl;//12
    int y = 4;
    int z = (x<<y);
    cout<<z;
    return 0;
}