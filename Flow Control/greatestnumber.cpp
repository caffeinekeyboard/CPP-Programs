#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    int greatest;
    if((a>b)&&(a>c))
    {greatest = a;}
    else if((b>a)&&(b>c))
    {greatest = b;}
    else 
    {greatest = c;}
    cout<<"\n The greatest number is: "<<greatest;
    return 0;
}