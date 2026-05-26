#include<iostream>
using namespace std;

class Tulip{
    public:
    string name1;
    string life_duration;

    void showTulip()
    {
    
        cout<<" flower name :"<<name1<<endl;
        cout<<"Life Duration :"<<life_duration<<endl;
    }

    Tulip(){
        cout<<"\033[31mflower names are.....\033[0m"<<endl;
    }

};

class Dahlia : public Tulip{
    public:
    string name2;
    string life_time;

    void showDahlia()
    {
        cout<<"flower name :"<<name2<<endl;
        cout<<"Life time :"<<life_time<<endl;
    }

};

class Daisy : public Dahlia{
    public:
    string name3;
    string life_span;

    void showdaisy()
    {
        cout<<"flower name :"<<name3<<endl;
        cout<<"Life span :"<<life_span<<endl;
    }
};

int main()
{
    Daisy d1;
    d1.name1="\"Tulip\"";
    d1.life_duration="one to three weeks";
    d1.name2="Dahlia";
    d1.life_time="five to seven days in a vase";
    d1.name3="Daisy";
    d1.life_span="seven to ten days in a vase";
    d1.showTulip();
    cout<<"--------"<<endl;
    d1.showDahlia();
    cout<<"--------"<<endl;
    d1.showdaisy();
}