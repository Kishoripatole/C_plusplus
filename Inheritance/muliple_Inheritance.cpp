#include<iostream>
using namespace std;

class tulip{
    public:
    string name;

};

class dahlia{
    public:
    string age;
};

class daisy : public tulip ,public dahlia{
    public:
    string fragrance;
};

int main()
{
    daisy d1;
    d1.name="Tulip";
    d1.age="ten days in a vase";
    d1.fragrance="very subtle,clean and airy";
    
    cout<<"Name :"<<d1.name<<endl;
    cout<<"Age :"<<d1.age<<endl;
    cout<<"fragrance :"<<d1.fragrance<<endl;
}