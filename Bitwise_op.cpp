#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cout<<"enter number a:";
    cin>>a;
    cout<<"enter number b:";
    cin>>b;

    cout<<"Bitwise operator(AND) :"<<(a & b)<<endl;
    cout<<"Bitwise operator(OR) :"<<(a | b)<<endl;
    cout<<"Bitwise operator(XOR):"<<(a ^ b)<<endl;
    cout<<"Bitwise operator(~(compliment)):"<<(~b)<<endl;
    cout<<"Bitwise operator(right shift >>):"<<(a>>2)<<endl;
    cout<<"Bitwise operator(left shift >>)"<<(a<<2)<<endl;
    return 0;
}