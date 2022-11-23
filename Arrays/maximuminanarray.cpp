#include<iostream>
using namespace std;
int arraymax(int arr[] , int n)
{
    int max = arr[0];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int n;
    cout<<"Enter array length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    cout<<"Maximum is: "<<arraymax(arr,n);
    return 0;
}