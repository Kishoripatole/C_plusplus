#include<iostream>
using namespace std;

int main()
{
    int K,C;
    cout<<"enter the number K:";
    cin>>K;
    cout<<"enter the number C:";
    cin>>C;

    cout<<"Is equal to operator:"<<(K==C)<<endl;
    cout<<"Greater than:"<<(K>C)<<endl;
    cout<<"Less than:"<<(K<C)<<endl;
    cout<<"Greater than or equal to:"<<(K>=C)<<endl;
    cout<<"Less than or equal to:"<<(K<=C)<<endl;
    cout<<"Not equal to:"<<(K!=C)<<endl;
    return 0;
}