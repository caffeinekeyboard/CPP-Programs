#include<iostream>
using namespace std;
int main()
{
    int a=26;
    int b=20;
    cout<<a<<" "<<b<<"\n";//26 20
    cout<<std::hex;//The hex flag is set for output manipulation all values will be displayed in hexadecimal, until the
                   //flag is reset or set again to a different one.
    cout<<a<<" "<<b<<"\n";//1a 14
    cout<<std::oct;//The oct flag is set for output manipulation all values will be displayed in octadecimal, until the
                   //flag is reset or set again to a different one.
    cout<<a<<" "<<b<<"\n";//32 24
    cout<<std::dec;//The dec flag is set for output manipulation all values will be displayed in decimal, until the
                   //flag is reset or set again to a different one.
    cout<<a<<" "<<b<<"\n";//26 20
    return 0;
}