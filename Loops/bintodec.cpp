#include<iostream>
using namespace std;
int bintodec(unsigned long long x)
{
    int value = 0;
    int power = 1;
    while(x > 0)
    {
        int digit = (x%10);
        value = value + (digit*power);
        x = x/10;
        power = power*2;
    }
    return value;
}
int main()
{
    unsigned long long x;
    cout<<"Enter binary: ";
    cin>>x;
    cout<<"Decimal form is: "<<bintodec(x);
    return 0;
}
//Range 0 to 262143.