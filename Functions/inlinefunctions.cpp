#include<iostream>
using namespace std;
inline int getMax(int x, int y)
{
    if(x>y)
        return x;
    else    
        return y;
}
int main()
{
    int a=10,b=20;
    cout<<"Greater: "<<getMax(a,b);
    return 0;
}