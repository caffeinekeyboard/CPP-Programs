#include<iostream>
using namespace std;
int distinctcount(int arr[], int n)
{
    int count=0;
    bool isDistinct = true;
    for(int i=0 ; i<n ; i++)
    {
        bool isDistinct = true;
        for(int j=i-1 ; j>=0 ; j--)
        {
            if(arr[i]==arr[j])
            {
                isDistinct=false;
                break;
            }
        }
        if(isDistinct==true)
            count++;
    }
    return count;
}
int main()
{
    int n;
    cout<<"Enter array length: ";
    cin>>n;
    int arr[n];//The array must be initialised only after the value of n is obtained from user, otherwise despite compilation, array 
               //will not be initialised and program will not run.
    cout<<"Enter array: ";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    cout<<"Distinct elements: "<<distinctcount(arr,n);
    return 0;
}