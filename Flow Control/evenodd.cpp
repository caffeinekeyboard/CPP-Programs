#include<iostream>
using namespace std;
int main()
{
    int ans;
    cout<<"Enter the number : \n";
    cin>>ans;
    if((ans%2)==0)
        {
            cout<<"The number is even.";
        }
    else
        {
            cout<<"The number is odd.";
        }
    return 0;
}