#include<iostream>
using namespace std;
int main()
{
    string arr[]={"Geeks",
                  "for",
                  "geeks"};
    for(const string &s : arr)//Much more memory efficient because the element wont have to be copied and placed in mem loc of
                              //the control variable.
        cout<<s<<"\n";
    return 0;
}
