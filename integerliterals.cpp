#include<iostream>
using namespace std;
int main()
{
    int a = 0x1A;//The prefix '0x' is the prefix to hexadecimal system, and 1A(hex)= 16+10 = 26(dec).
    int b = 16;//The prefix 'o' is the prefix to octal system, and 16(oct)= 6+8 = 14(dec) it wont work on Vscode for some reason.
    int c = 0b11;//The prefix '0b' is to the prefix to binary system, and 11(bin) = 3(dec).
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}