#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    for(int x : arr)//Changes will not be applied, they're lost when new element is stored in memloc of x.
        x=x*2;
    for(int x : arr)
        cout<<x<<" ";
    return 0;
}