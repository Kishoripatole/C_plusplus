#include<iostream>
#include<string.h>
using namespace std;

class teacher{
    //properties
public:
   string name;
   int age;
   string dept;
   string subject; 

   //methods
   void changeDept(string newDept){
     dept = newDept;
   }

};

int main()
{
    teacher t1;
    t1.name="Neha";
    t1.age=20;
    t1.subject="Mathematics(integral calculas)";
    t1.dept="Mathematics and statistics";
    t1.changeDept("Applied mathematics");
    cout<<"Subject="<<t1.subject<<"\n"<<"Age="<<t1.age<<"\n"
    <<"Name="<<t1.name<<"\n"<<"Departement name="<<t1.dept<<endl;
    

}
