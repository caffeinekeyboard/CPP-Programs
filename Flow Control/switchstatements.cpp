#include<iostream>
using namespace std;
int main()
{
    int x=0,y=0;
    char move;
    cout<<"Enter a choice : ";
    cin>>move;
    switch(move)
    {
        case 'L' : x--;//If value of move is 'L' the x-- will be executed.
                 break; 
        case 'R' : x++;//If value of move is 'R' the x++ will be executed.
                 break;
        case 'U' : y++;//If value of move is 'U' the y++ will be executed.
                 break;
        case 'D' : y--;//If value of move is 'D' the y-- will be executed.
                 break;
        default : cout<<"\nThe choice is invalid.";
    }
    cout<<x<<" "<<y;
    return 0;
}