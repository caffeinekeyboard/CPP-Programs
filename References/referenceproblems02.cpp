#include<iostream>
using namespace std;
int main()
{
    string s1="Courses " , s2="GFG ";
    string &&s3= "Welcome to " + s2 + s1;
    cout<<s3;
    return 0;
}
