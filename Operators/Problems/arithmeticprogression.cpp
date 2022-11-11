#include<iostream>
using namespace std;
int main()
{
    int a;
    int d;
    cout<<"Enter a and d of A.P. : "<<"\n";
    cin>>a>>d;
    int n;
    cout<<"Enter the number of the term to be found : ";
    cin>>n;
    cout<<"\nThe nth term is : "<<(a + (n-1)*d);
    return 0;
}