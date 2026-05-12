#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter the number a:"<<endl;
    cin>>a;
    cout<<"enter the number b:"<<endl;
    cin>>b;

    cout<<"Logical operator (AND):"<<(a && b)<<endl;
    cout<<"Logical operator (OR):"<<(a || b)<<endl;
    cout<<"Logical operator (NOT):"<<(!a)<<endl;
}