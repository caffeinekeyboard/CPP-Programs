#include<iostream>
using namespace std;
int main()
{
    int arr[6]={10,20};
    cout<<sizeof(arr)/sizeof(arr[0]);
    return 0;
}
//Irrespective of whether the array elements are filled with a non zero value, the momory is allocated by the compiler to this
//array. Thus the size of the array remains same even if all elements are not initialised by user.