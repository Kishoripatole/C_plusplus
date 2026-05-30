#include<iostream>
using namespace std;

class Cat{
    public:

    void show()
    {
        cout<<"eating bread"<<endl;
    }

};

class Dog:public Cat{
    public:

    void show()
    {
        cout<<"eating bread and milk"<<endl;
    }
};

int main()
{
    Dog d1;
    d1.show();

}