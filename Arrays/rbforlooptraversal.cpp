#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,30,20,40};
    for(int x : arr)//This statement will assign first element to x in first iteration, and then every iteration it will assign the 
    {               //next element to x till the last element is assigned.
        cout<<x<<" ";
    }
    return 0;
}
