#include<iostream>
using namespace std;

class Teacher{
    public:
    string name;
    string subject;

    void main()
    {
        cout<<"Name is :"<<name<<endl;
    }

};

class Student : public Teacher{
    public:
    string name1;
    string subject1;

    void display()
    {
        cout<<"Name is :"<<name1<<endl;
    }
};

int main()
{
    Student s1;
    s1.name1="Renuka";
    s1.name="Kalavati";
    s1.subject1="Computer science";
    s1.subject="Mathematics";

    s1.display();
    cout<<"\033[31m hi I am kalavati !\033[0m"<<endl;
    s1.main();

}
