#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    bool res = (x==5)||(x++);
    cout<<res<<"\n";//1
    cout<<x;//5 (x remains unchanged as the operator has been short circuited.)
    return 0;
}