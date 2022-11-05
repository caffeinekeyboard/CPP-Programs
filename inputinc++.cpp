#include<iostream>//The library will have classes like istream (input stream) and ifstream (input stream from file)
                  //and ostream (output stream) and ofstream (output stream from file).
                  //These classes have objects like cin, cout, cerr, clog, etc.
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter two integers : ";
    cin>>x>>y;//If you type a value and press enter then the value will be immediately stored as x and the terminal will
              //print a new line for the second input and record it.
              //But if you enter the values with space in between them then both the values will be stored simultaneously.
    cout<<"Sum : "<<(x+y);//Output of cout after a cin will automatically be printed on a new line, no need for \n or endl. 
    return 0;
}