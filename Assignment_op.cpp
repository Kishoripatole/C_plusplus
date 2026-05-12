#include<iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"enter the number a:";
    cin>>x;
    cout<<"enter the number b:";
    cin>>y;

    cout<<"The value of x+=y is:"<<(x+=y)<<endl;
    cout<<"The value of x-=y is:"<<(x-=y)<<endl;
    cout<<"The value of x*=y is:"<<(x*=y)<<endl;
    cout<<"The value of x/=y is:"<<(x/=y)<<endl;
    cout<<"The value of x%=y is:"<<(x%=y)<<endl;
}