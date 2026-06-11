#include<iostream>
using namespace std;

class Fract{
    private:
    int a1;
    int b1;


    public:  
    Fract() : a1(0), b1(0) {}  
    void in() {  
        cout << "Enter the numerator: "<<endl;  
        cin >> a1;


     cout<< "Enter the denominator: "<<endl;  
        cin >> b1;  
    }  
    // Overload the * operator  
    Fract operator * (const Fract &ob) {  
        Fract tem;  
        tem.a1 = a1 * ob.a1;  
        tem.b1 = b1 * ob.b1;  
        return tem;  
    }  
   
    void out() {  
      cout<<"The fraction is  "<< a1<<"/ "<<b1;  
    }  
};

int main() //main function  
{  
    Fract Fa1, Fa2, res;  
    cout << "Enter the first fraction:n"<<endl;  
    Fa1.in();  
    cout << "Enter the second fraction:n"<<endl;  
    Fa2.in();  
   // The overloading operator  
    res = Fa1 * Fa2;  
    res.out();  
    return 0;  
}  