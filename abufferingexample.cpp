#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the first integer : ";//If the user inputs the second value with a space bar then it will get stored into
    cin>>x;                            //the buffer and read when line 9 (cin>>y) is processed. 
    cout<<"Enter the second integer : ";//The user need not enter any value here if he has entered the second value with a 
    cin>>y;                             //space bar during the first input.
    cout<<"Multiplication is :- ";
    cout<<"\n"<<(x*y);
    return 0;
}
//ONE WAY TO RUN THE PROGRAM :-
//Enter the first integer : 10
//Enter the second integer : 20
//Multiplication is :-
//200

//Another way to run the same program :-
//Enter the first integer : 10 20
//Enter the second integer : Multiplication is :- 
//200