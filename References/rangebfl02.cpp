#include<iostream>
using namespace std;
int main()
{
    string arr[]={"Geeks",
                  "for",
                  "geeks"};
    for(string s : arr)
        cout<<s<<"\n";
    return 0;
}