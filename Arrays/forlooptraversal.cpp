#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i<n ; i++)//This loop will run for values of i from 0 to 3 and then stop.
    {
        cout<<arr[i];
        if(i==(n-1))
            cout<<".";
        else
            cout<<",";
    }
    return 0;
}