#include<iostream>
using namespace std;
int main()
{
    int x=10,y=20;
    int z=x+x*y;//Processed as: x+(x*y). Here * has more precedence than +. 
    cout<<z<<"\n";//210
    z=y/x*x;//Processed as: (y/x)*x. Here / and * have the same precedence. So associativity comes into play. 
            //For * / % operators the associativity is from left to right of a given  expression. That is why
            //the operation on the left (y/x) is processed first.
    cout<<z<<"\n";//20
    z=y=x;//Processed as: z=(y=x). Here = has the same precedence with itself (obviously). So again associativity
          //comes into play. For = the associativity is from right to left of a given expression. That is why
          //the operation on the right (y=x) is processed first.
    cout<<y<<"\n";//10
    cout<<z<<"\n";//10
    return 0;
}