#include<iostream>
using namespace std;
int main()
{
    int x = 33;
    cout<<(x>>1)<<endl;//16
    cout<<(x>>2)<<endl;//8
    int y = 4;
    int z = (x>>y);
    cout<<z;//2
    return 0;
}