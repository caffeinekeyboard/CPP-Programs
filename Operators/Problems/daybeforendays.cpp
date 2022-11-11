#include<iostream>
using namespace std;
int main()
{
    int d;
    int n;
    cout<<"Enter the day number : "<<"\n";
    cin>>d;
    cout<<"Enter no. of days before the day : "<<"\n";
    cin>>n;
    int x = (n%7);
    int answer = (d-x);
    if(d>n)
        cout<<"The day before "<<n<<" days is "<<answer;
    else
        cout<<"The day before "<<n<<" days is "<<(answer + 7);
    return 0;
}
//The above code returns sensible values if the number of days variable 'n' does not have too big of a value.