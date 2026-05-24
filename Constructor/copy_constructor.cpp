#include<iostream>
using namespace std;

class square{
    public:
     int length;

     //parameterized constructor
     square(int l){
        length=l;
     }
      //copy constructor
     square(const square &obj){
        length=obj.length;
     }

     void main(){
         cout<<"Length is :"<<length<<endl;
     }

};

int main()
{
    square b1(45);
    square b2(b1);
    b1.main();
    b2.main();
}