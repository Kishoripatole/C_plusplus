#include<iostream>
using namespace std;

void printinfo(int age)
{
    cout<<"Age:"<<age<<endl;

}

void printinfo(int age,float heigth)
{
    cout<<"Age:"<<age<<endl<<"Height:"<<heigth<<endl;
}

void printinfo(int age,float heigth,string name)
{
    cout<<"Age:"<<age<<endl<<"height:"<<heigth<<endl<<"Name:"<<name<<endl;
}

int main()
{
    printinfo(19);
    cout<<"--------"<<endl;
    printinfo(20,157);
    cout<<"--------"<<endl;
    printinfo(21,158,"kishori");
}