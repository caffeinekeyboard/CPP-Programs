#include<iostream>
using namespace std;
int main()
{
    int x=10;//The character x is stored as a float as well as an integer as the preprocessor sees it being used for integer addition and float type addition. It is stored as 10, and 10.0 .
    char y='A';//The character A is stored in its ASCII value as it is seen later in the program being addes to an integer by the preprocessor. The ASCII value of A is 65.
    cout<<(x+y)<<endl;//65+10 = 75
    float z=10.5;
    cout<<(x+z);//10+10.5 = 20.5
    return 0;
}