#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    bool res = (x>10)&&(x++);
//In the above statement the compiler will see that the first condition itself is false thus making the value of res false
//irrespective of the second condition. So the compiler will not even bother to look at it and run it, thus short circuiting
//the operator. As a result x++ won't happen and the value of x will remain the same (5).
    cout<<res<<"\n";//0
    cout<<x;//5
    return 0;
}