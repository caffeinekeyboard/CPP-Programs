#include<iostream>
using namespace std;
int getMax(int x,int y)
{
    int max;
    string invalid = "Neither one is greater, they are equal.";
    if(x>y)
        {max = x;
        return max;}
    else
        {max = y;
        return max;}
    
}
int main()
{
    int a,b;
    cout<<"Enter the two numbers: ";
    cin>>a>>b;
    cout<<"The bigger one is: "<<getMax(a,b);
    return 0;
}