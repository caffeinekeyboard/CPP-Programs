#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int a = -33;
    cout<<std::bitset<32>(a)<<endl;//11111111111111111111111111011111
//The first 1 is the signed bit here ^ .Rest 31 bits above are the 2's complement of the number 33.
    return 0;
}