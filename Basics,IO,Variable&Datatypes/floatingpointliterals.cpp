#include<iostream>
#include<typeinfo>
using namespace std;
int main()
{
    auto a = 10.5f;//stored as float
    auto b = 10.678;//stored as double
    auto c = 2.1e15f;//stored as float with value 2.1*10^15
    auto d = 200.1e-80;//stored as double with value 2.001*10-78
    auto f = 0x1A.1p2;//stored as double (despite being inputed in hex) with value 26.0625 * 2^2 = 104.25
    cout<<typeid(a).name();
    cout<<typeid(b).name();
    cout<<typeid(c).name();
    cout<<typeid(d).name();
    cout<<typeid(f).name();
    return 0;
}