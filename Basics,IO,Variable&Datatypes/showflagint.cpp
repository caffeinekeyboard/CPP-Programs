#include<iostream>
using namespace std;
int main()
{
    int a = 26;
    cout<<a<<"\n";//26
    cout<<std::showbase;//The showbase flag will print 0x before output if it is a hex value, O before output if it is an
                        //oct value, and nothing if it is a dec value.
    cout<<a<<"\n";//26
    cout<<std::hex;//All output till this flag is changed or reset will be in hexadecimal.
    cout<<a<<"\n";//0x1a (0x because of the showbase flag).
    cout<<std::oct;//All output till this flag is changed or reset will be in octadecimal.
    cout<<a<<"\n";//032 (o because of the showbase operator).
    cout<<std::showpos;//This flag will print '+' sign before output if it is a postitive value.
                       //This will not overwrite or reset the showbase flag.
                       //The showbase flag will continue to function normally.
    cout<<a<<"\n";//+032 (+ because of the showpos flag).
    cout<<std::uppercase;//This value will print everything in uppercase.
                         //This will not overwrite or reset the showbase and showpos flag.
                         //The showbase and showpos flags will continue to function normally.
    cout<<std::hex;//All output till this flag is changed or reset will be in hexadecimal.
    cout<<a<<"\n";//+0X1A 
    return 0;
}