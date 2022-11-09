#include<iostream>
using namespace std;
int main()
{
    unsigned int x = 1;
    cout<<(~x)<<endl;//4294967294
    x = 5;
    cout<<(~x)<<endl;//4294967290
    return 0;
}