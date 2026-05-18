#include<iostream>
using namespace std;

class StofDisha{
    public://access specifier or access modifier
    string name;
    int id;
    string course_name;
    string joining_date;
    string course_duration;
    string Faculty_name;

    void main(){
        cout<<"Name of student :"<<name<<"\n"
        <<"Id of student :"<<id<<"\n"
        <<"Course name :"<<course_name<<"\n"
        <<"Joining Date :"<<joining_date<<"\n"
        <<"Course Duration :"<<course_duration<<"\n"
        <<"Faculty name :"<<Faculty_name<<"\n";
    }


};

int main()
{
   StofDisha s1;
   s1.name="kalavati";
   s1.id=105;
   s1.course_name="Diploma in software programming";
   s1.joining_date="\"2/2/2026\"";
   s1.course_duration="six months";
   s1.Faculty_name="Dhiraj sir";
   s1.main();

}