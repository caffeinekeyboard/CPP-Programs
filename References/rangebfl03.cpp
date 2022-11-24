#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    for(int &x : arr)//Here the changes will reflect because the variable itself is being assigned to the memory locations of the 
                     //elements of the array, and changes are stored there itself, before it is shifted up in memory to a different
                     //memory location.
        x=x*2;
    for(int x : arr)
        cout<<x<<" ";
    return 0;
}