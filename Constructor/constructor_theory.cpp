#include<iostream>
using namespace std;

class Textbook{
    public:
    string edition;
    string subject;
    string publish_date;

    Textbook(){
        cout<<"Hello , I am constructor!";
        cout<<"This is textbook edition !";
    }

    void display(){
        cout<<"Edition :"<<edition<<endl;
    }
};


int main()
{
    Textbook Tb1;//
    Textbook Tb2;

    Tb1.edition="\"02/02/1906\"";
    Tb1.display();
}