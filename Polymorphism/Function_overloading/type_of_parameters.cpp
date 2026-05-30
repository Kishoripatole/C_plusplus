#include<iostream>
using namespace std;

int multiplication(int a,int b)
{
    return a*b;
}

double multiplication(int x,double y)
{
    return x*y;
}

int main()
{
    cout<<multiplication(4,2)<<endl;
    //cout<<multiplication(8,2.55)<<"\n";
}