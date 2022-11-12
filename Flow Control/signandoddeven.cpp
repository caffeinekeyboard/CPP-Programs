#include<iostream>
using namespace std;
int main()
{
    int ans;
    cout<<"Enter the number : ";
    cin>>ans;
    if(ans>0)
    {
        cout<<"The number is positive ";
        if((ans%2)==0)
        {
            cout<<"and even.";
        }
        else
        {
            cout<<"and odd.";
        }
    }
    else if(ans<0)
    {
        cout<<"The number is negative ";
        if((ans%2)==0)
        {
            cout<<"and even.";
        }
        else
        {
            cout<<"and odd.";
        }
    }
    else 
    {
        cout<<"Number is zero.";
    }
    return 0;
}
