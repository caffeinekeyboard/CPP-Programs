#include<iostream>
using namespace std;
int myMax(int x, int y)
{
    if(x>y)
        return x;
    else 
        return y;
}
int myMax(int x,int y,int z)
{
    return myMax(myMax(x,y),z);
}
int main()
{
    int a,b,c,d,e;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<myMax(a,b);
    cout<<"\nEnter three numbers: ";
    cin>>c>>d>>e;
    cout<<myMax(c,d,e);
    return 0;
}