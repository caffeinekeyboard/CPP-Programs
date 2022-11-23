#include<iostream>
using namespace std;
int arraysum(int arr[] , int n)
{
    int sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int n;
    cout<<"Enter the length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Average of the array is: "<<double (arraysum(arr,n))/n;
    return 0;
}