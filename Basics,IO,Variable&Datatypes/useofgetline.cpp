#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your full name : ";
    getline(cin,s);/*The getline(_,_) operator is an input operator that will store a string value with spaces inside it
                     to a variable. The cin operator is incapable of doing that as it ignores everything after a space
                     and stores only the first item into the variable.*/
    cout<<"\n"<<"Welcome to GeeksforGeeks, "<<s<<".";
    return 0;
}