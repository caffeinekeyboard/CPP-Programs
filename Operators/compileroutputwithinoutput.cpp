#include<iostream>
using namespace std;
int main()
{
    int a=10 , b=20 , c=30;
    if(c>b>a)
        cout<<"Y";
    else
        cout<<"N";
    return 0;
}
//Mathematically the statement (c>b>a) is indeed correct, but the way the compiler handles and computes this data results
//in the opposite output as 'N' isntead of 'Y'. Check notebook program number 52 for more detailed information.