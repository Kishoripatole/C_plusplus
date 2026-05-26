#include<iostream>
using namespace std;

class Textbook{ //Base class
    public:
    string edition;
    string subject;
    string publish_date;

    // Constructor
    Textbook(){
        cout<<"Hello , I am constructor!";
        cout<<"This is textbook edition !";
    }

   //Methods
    void display(){
        cout<<"Edition :"<<edition<<endl;
    }
};


int main()
{
    Textbook Tb1;// Constructors are automatically called when an object is created
    Textbook Tb2;

    Tb1.edition="\"02/02/1906\"";
    Tb1.display();
}
