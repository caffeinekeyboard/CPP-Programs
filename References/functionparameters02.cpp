#include<iostream>
using namespace std;
void fun(string s)
{
    cout<<s;
}
int main()
{
    string s = "GeeksforGeeks";
    fun(s);//The string had to be copied to the function fun.
    return 0;
}