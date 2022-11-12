#include<iostream>
using namespace std;
int getMax(int x,int y);//The function is declare i.e. prototyped.
int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"\nThe max is: "<<getMax(a,b);//The function is used first.
    return 0;
}
int getMax(int x,int y)//the function is defined later.
{
    if(x>y)
        return x;
    else
        return y;
}