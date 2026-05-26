#include<iostream>
using namespace std;

class person {
    public:
    int age;
    string name;
};

class student : public person{
    public:
    int age1;
    string name1;
};

class teacher :public person{
    public:
    int age2;
    string name3;
};

int main()
{
    person p1;
    p1.age=20;
    p1.name="paro";
    
    cout<<"Name :"<<p1.name<<endl;
    cout<<"Age :"<<p1.age<<endl;
}
