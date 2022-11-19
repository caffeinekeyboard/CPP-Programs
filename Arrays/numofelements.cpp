#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    cout<<sizeof(arr)/sizeof(arr[0]);//Will return number of elements in array//5(20 bytes/4 bytes = 5 elements)
    return 0;
}
