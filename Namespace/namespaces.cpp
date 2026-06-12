#include<iostream>
using namespace std; //using standard namespace

namespace first{

    void hello(){
        cout<<"Hello C++"<<endl;
    }

}

namespace second{

    void bye(){
        cout<<"Bye C++"<<endl;
    }
}
int main()
{
    first::hello();
    second::bye();
}