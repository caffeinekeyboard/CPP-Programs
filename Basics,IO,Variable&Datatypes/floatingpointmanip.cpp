#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<std::setprecision(4);//Default precision set to 4.
    double x = 15.5683, y = 34267.1;
    cout<<x<<" "<<y<<"\n";//15.57 3.427e+004.
    double z = 1.23;
    cout<<std::showpoint<<z<<"\n";//1.230
    cout<<std::showpos<<z<<"\n";//+1.230
    cout<<std::uppercase<<y;//3.427E+004
    return 0;
}