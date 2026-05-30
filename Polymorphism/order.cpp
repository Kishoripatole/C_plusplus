#include<iostream>
using namespace std;

int add(int a,double b)
{
    return a+b;
}

double add(double a,int b)
{
    return a+b;
}

int main()
{
   cout<<add(4.12,4)<<"\n";
   cout<<add(4,4.45)<<"\n";
}