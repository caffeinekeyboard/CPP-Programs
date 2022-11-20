#include<iostream>
using namespace std;
bool checkifsorted(int arr[] , int n)
{
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i]>arr[i+1])
        {  
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cout<<"Array length: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array: ";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    if(checkifsorted(arr,n))
        cout<<"ARRAY IS SORTED.";
    else 
        cout<<"ARRAY IS NOT SORTED.";
    return 0;
}