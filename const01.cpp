#include<iostream>
using namespace std;
const double pi = 3.14159;
int main()
{
        int r;
        cout<<"Please enter the value of the radius"<<endl;
        cin>>r;
        cout<<"Area is : "<<(pi*r*r);
        return 0;
}
/*A notable property of the constant variable is that if defined globally, like any other variable it can be accessed
anywhere by any function, and thus avoids repeated definings of the same value to a variable that is local to the 
operator/function.*/