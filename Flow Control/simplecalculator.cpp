#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<std::setprecision(10);
    double x,y;
    char operation;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter your operation: ";
    cin>>operation;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Your expression is: "<<x<<operation<<y;
    cout<<"\nAnswer is : ";
    switch(operation)
    {
        case '+' : cout<<(x+y);
        break;
        case '-' : cout<<(x-y);
        break;
        case '*' : cout<<(x*y);
        break;
        case '/' : cout<<(x/y);
        break;
        default:cout<<"Please enter a valid operation.";
    }
    return 0; 
}