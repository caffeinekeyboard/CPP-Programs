#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    while(n--)//This particular syntax of while loop wil run a while loop until the integer n is zero, and every iteration,
    {         //it reduces value of i by one. As once it becomes zero, its bool value is now false.
        cout<<"*";
    }
    return 0;
}