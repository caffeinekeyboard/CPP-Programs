#include<iostream>
using namespace std;
int main()
{
    int n, c;
    cout<<"Enter the number of cups: ";
    cin>>n;
    cout<<"Enter the cup-number of chosen cup: ";
    cin>>c;
    if(c>n)
    {
        cout<<"Invalid cup-number.";
    }
    else
        {
            if((c%2)==0)
                {
                    if((n%2)==0)
                    {
                        cout<<"YOU WON.";
                    }
                    else
                    {
                        cout<<"OPPONENT WON.";
                    }
                }
            else
                {
                    if((n%2)==0)
                    {
                        cout<<"OPPONENT WON.";
                    }
                    else
                    {
                        cout<<"YOU WON.";
                    }  
                }
        }
    return 0;
}