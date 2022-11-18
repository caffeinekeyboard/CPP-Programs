#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=n ; i>=1 ; i--)
    {
        int j=i;
        while(j>=1)
        {
            cout<<"*";
            j--;
        }
    cout<<"\n";
    }
}