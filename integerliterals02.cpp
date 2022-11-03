#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 11u;//The suffix 'u' is for denoting 'unsigned' datatype.
    int c = 123l;//The suffix 'l' is to denote the 'long' datatype.
    int d = 122ll;//The suffix'll' is to denote the 'long long' datatype.
    cout<<sizeof(a)<<endl;//4 bytes
    cout<<sizeof(b)<<endl;//4 bytes
    cout<<sizeof(c)<<endl;//4 bytes
    cout<<sizeof(d)<<endl;//8 bytes(but cpp has no standard so VSCode will take it in as a 4 byte value :-( .)
    return 0;
 }