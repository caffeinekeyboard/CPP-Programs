#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    int r;
    int n;
    cout<<"Enter a,r,n with spaces between them : ";
    cin>>a>>r>>n;
    cout<<"\n"<<(a*pow(r, (n-1)));
    return 0;
}
