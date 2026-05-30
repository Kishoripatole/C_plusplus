#include<iostream>
using namespace std;

float print_marks(int BBA_CET,float Jee_main,float MHT_CET)
{
    cout<<"JEE Mains Score:"<<Jee_main<<endl<<"BBA_CET Score:"<<"MHT_CET Score:"<<MHT_CET<<"\n";
}


double print_marks(double MHT_CET,int Jee_main,double BBA_CET)
{
   cout<<"JEE Mains Score:"<<Jee_main<<endl<<"BBA_CET Score:"<<BBA_CET<<endl<<"MHT_CET Score:"<<MHT_CET;
}

double print_marks(double BBA_CET,int MHT_CET,int Jee_main)
{
   cout<<"JEE Mains Score:"<<Jee_main<<endl<<"BBA_CET Score:"<<BBA_CET<<endl<<"MHT_CET Score:"<<MHT_CET;
    
}
int main()
{
    print_marks(68.12,58,49);

}

