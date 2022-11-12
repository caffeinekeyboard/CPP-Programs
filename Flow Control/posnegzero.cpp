#include<iostream>
using namespace std;
int main()
{
    int ans;
    cout<<"Enter the number : \n";
    cin>>ans;
    if(ans>0)
    {
        cout<<"Positive.";
    }
    else if(ans<0)
    {
        cout<<"Negative.";
    }
    else
    {
        cout<<"Zero";
    }
    return 0;
}