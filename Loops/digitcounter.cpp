#include<iostream>
using namespace std;
int digitcounter(unsigned long long x)
{
    int counter=0;
    while(x>0)
    {
        x=x/10;
        counter++;
    }
    return counter;
}
int main()
{
    unsigned long long x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"No. of digits: "<<digitcounter(x);
    return 0;
}