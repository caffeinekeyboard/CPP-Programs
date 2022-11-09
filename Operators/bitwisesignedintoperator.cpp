#include<iostream>
#include<bitset>
using namespace std;
int main()
{
    int x = 1;
    cout<<x<<endl;//1
    cout<<std::bitset<32>(x)<<endl;//
    x = ~x;
    cout<<x<<endl;//-2
    cout<<std::bitset<32>(x)<<endl;//
    int y = 5;
    cout<<y<<endl;//5
    cout<<std::bitset<32>(y)<<endl;//
    y = ~y;
    cout<<y<<endl;//-6
    cout<<std::bitset<32>(y)<<endl;//
    return 0;
}