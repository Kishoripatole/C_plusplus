#include<iostream>
using namespace std;

inline int add(int a,int b){
    return a+b;
}

int main()
{
    int a,b;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;

    cout<<"Addition of a and b:"<<add(a,b);
}