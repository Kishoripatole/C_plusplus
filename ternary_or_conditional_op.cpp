#include<iostream>
using namespace std;

int main()
{
    int score;

    cout<<"enter the score:";
    cin>>score;

    string result =(score>=50) ? "You are eligible":"You are not eligible";
    cout<<result<<endl;
    return 0;
}