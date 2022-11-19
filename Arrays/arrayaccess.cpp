#include<iostream>
using namespace std;
int main()
{
    int arr[4]={10,20,30,40};
    cout<<arr[2]<<" "<<arr[0]<<"\n";
    arr[2]=50;
    cout<<arr[2];
    return 0;
}
/*OUTPUT : 30 10
           50   
*/