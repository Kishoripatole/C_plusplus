#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    string name;
    float salary;

    employee(int i,string n,float s){
         
        id=i;
        name=n;
        salary=s;
    }

    void main()
    {
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }

};

int main()
{
    employee e1=employee(105,"renuka",25000.00);
    employee e2=employee(108,"Kalavati",25000.25);

    e1.main();
    e2.main();
}