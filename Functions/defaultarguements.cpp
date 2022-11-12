#include<iostream>
using namespace std;
void outDetails(int id, string name = "N/A", string address = "N/A")
{
    cout<<"\nName: "<<name;
    cout<<"\nID: "<<id;
    cout<<"\nAddress: "<<address;
}
int main()
{
    outDetails(101,"Aarya Bhave","Pune");
    outDetails(310,"Anushka Bhave");
    outDetails(32);
    return 0;
}