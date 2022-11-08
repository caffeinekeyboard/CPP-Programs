#include<iostream>
using namespace std;
int main()
{
    int x = 5;
    bool res = (x>10)||(x++);//NOTE: The value of x++ is int but despite of that it will work in a bool operation.
                             //C++ automatically considers any non zero int/float as true and assigns them a bool value of 1.
                             //This is unique to C++ and won't work in Java or Python.
//In the above statement both the conditions will be examined as the first condition is false, and in order to determine
//the value of bool res, second condition must also be taken into consideration.
//So the compiler runs the operation x++ and examins the result (6) and sees it is true. Making bool res true.
//This did not short circuit the logical operator and thus changed the value of x.
    cout<<res<<"\n";//1
    cout<<x;//6
    return 0;
}