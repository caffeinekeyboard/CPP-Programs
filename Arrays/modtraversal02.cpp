#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    for(int &x : arr)//The ampersand(&) symbol is used to denote a reference variable. It will be discussed later.
        x=x*2;
    for(int x : arr)
        cout<<x<<" ";
    return 0;
}