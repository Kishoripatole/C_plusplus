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
    string name2;
};

int main()
{
    person p1;
    student s1;
    teacher t1;
    p1.age=20;
    p1.name="Paro";
    s1.age1=20;
    s1.name1="Kala";
    t1.age2=20;
    t1.name2="Kishori";


    
    cout<<"Year:1966"<<endl;
    cout<<"Name :"<<p1.name<<endl;
    cout<<"Age :"<<p1.age<<endl;
    cout<<"Year:1986"<<endl;
    cout<<"Name :"<<s1.name1<<endl;
    cout<<"Age :"<<s1.age1<<endl;
    cout<<"Year:2006"<<endl;
    cout<<"Name :"<<t1.name2<<endl;
    cout<<"Age :"<<t1.age2<<endl;
}
