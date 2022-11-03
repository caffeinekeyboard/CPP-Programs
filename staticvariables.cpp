#include<iostream>
using namespace std;
int main()
{
    static int x;
    cout<<x;
    return 0;
}
//The static variable x is left undefined yet the terminal wont return a garbage value amd set '0' as the default value for the variable.