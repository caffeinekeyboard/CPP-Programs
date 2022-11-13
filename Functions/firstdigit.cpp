#include<iostream>
using namespace std;
int findFirstDigit (int x)
{
    while(x>10)
    {
        x = x/10;//The compiler will only carry out the integer division and evaluate an integer answer.
    }
    return x;
}
int main()
{
    int a;
    cout<<"Enter Number: ";
    cin>>a;
    cout<<"\nFirst digit is: "<<findFirstDigit(a);
    return 0;
}