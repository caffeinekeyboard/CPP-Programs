#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    cout<<arr<<"\n";//Prints the address of the first element of the array.(some hex value).
    cout<<arr[2];//Prints the element of the array occupying the address: arr + 2(sizeof(int)) = arr + 2*4 = arr + 8 bytes.
                 //i.e 30.
    return 0;
}