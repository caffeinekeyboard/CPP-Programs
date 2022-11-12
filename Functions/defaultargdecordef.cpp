#include<iostream>
using namespace std;
int sum(int a, int b, int c=0, int d=0);//The default arguements are put in here in the declaration.
int main()
{
    cout<<sum(10,20,30,40)<<"\n";
    cout<<sum(10,20,30)<<"\n";
    cout<<sum(10,20);
    return 0;
}
int sum(int a, int b, int c, int d)//The default arguements MUST NOT be put here, because it is already defined in declaration.
{
    return(a+b+c+d);
}