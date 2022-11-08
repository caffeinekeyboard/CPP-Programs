#include<iostream>//The library will have classes like istream (input stream) and ifstream (input stream from file)
                  //and ostream (output stream) and ofstream (output stream from file).
                  //These classes have objects like cin, cout, cerr, clog, etc.
using namespace std;
int main()
{
    int x = 10;
    float y = 10.5;
    bool z = true;
    string s = "GeeksforGeeks";
    char c = 'g';
    cout<<x<<" "<<y<<endl;//The endl operator will print a new line but in process will also flush the data in the
                          //buffer and make it read everything after as fresh data, this makes the overall process slower.
    cout<<z<<" "<<s;//The output for z will be 1, as for bools, true = 1 and false = 0. However we can have the ouput print
                    //'true' or 'false' respectively by iostream manipulation methods.
    cout<<"\n"<<c;//The "\n" operator will also print out another line but wont flush the buffer, and is thus faster.
    return 0;
}