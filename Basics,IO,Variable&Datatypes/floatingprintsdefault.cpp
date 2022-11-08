#include<iostream>
using namespace std;
int main()
{
    double x = 1.2300;
    cout<<x<<"\n";//1.23 (all trailing zeros are ignored.)
    double y = 1567.56732;
    cout<<y<<"\n";//1567.57 (rounded to six digit answer.)
    double z = 1244567.45;
    cout<<z<<"\n";//1.24457e+06 (rounded and expressed in ideal scientific notation.)
    double w = 124456.67;
    cout<<w<<"\n";//124457 (rounded but not expressed in ideal scientific notation because rounded value fits in 6 digits.)
    double u = 123e+02;
    cout<<u;//Scientific notation ignored because actual value fits in 6 digits.)
    return 0;
}