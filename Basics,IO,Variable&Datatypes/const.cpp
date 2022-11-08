#include<iostream>
using namespace std;
int main()
{
        const int x = 10;
        // @ts-ignore x=x+1;
        cout<<x;
        return 0;
}
/*The above program will return a compiler error as an attempt has been made to change or modify
the constant variabkle 'x'. However if line 6 is removed or the keyword 'const' is removed from 
line 5 then the program will run normally. The "// @ts-ignore" signal is placed solely for the 
purpose of avoiding red-flagging by Microsoft VSCode.*/