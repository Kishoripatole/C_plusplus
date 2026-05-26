#include<iostream>
using namespace std;

class Library{
    public:
    string library_name;
    string section;
    string author_name;

    Library(string library_name,string section,string author_name)
    {
        this->library_name=library_name;
        this->section=section;
        this->author_name=author_name;

    }
};


class Book{
    private:
    Library *Bk;

    public:
    string book_name;

    Book(string book_name,Library *Bk)
    {
        this->book_name=book_name;
        this->Bk=Bk;
    }

    void show_the_details()
    {
      cout<<"Library name:"<<Bk->library_name<<"\n"<<"Section :"<<Bk->section<<"\n"<<"Book_name:"<<book_name<<"\n"<<"Author_name:"<<Bk->author_name<<endl;
    }
};

int main()
{
    Library Bk1=Library("Mahakavya","A","Sudha murthy");
    Book B1=Book("Aayushache Dhade Giravatana",&Bk1);
    Library Bk2=Library("Mahakavya","C","shivaji Sawant");
    Book B2=Book("Mrityunjaya",&Bk2);
    Library Bk3=Library("Mahakavya","D","Veena Gavankara");
    Book B3=Book("Ek Hota Carver",&Bk3);
    Library Bk4=Library("Mahakavya","B","Dr.A.P.J. Abdul Kalam");
    Book B4=Book("Agnipankh",&Bk4);
    cout<<"--------Book_Details--------"<<endl;
    B1.show_the_details();
    cout<<"----------------"<<endl;
    B2.show_the_details();
    cout<<"----------------"<<endl;
    B3.show_the_details();
    cout<<"----------------"<<endl;
    B4.show_the_details();
    cout<<"----------------"<<endl;


}