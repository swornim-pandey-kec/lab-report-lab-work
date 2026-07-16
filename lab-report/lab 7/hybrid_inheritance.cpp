//define a class publication which has a title derive two classes from it . A class book which has an accession number and a class maganine which has a vplume number With these two as base Dervive the class journal. Define a function print() in each of these classes . Ensure that the drive class always envokes the base class function. In main() create a journal called ieeeoop with as accession number 681.3 and a volume number 1 . Envoke the print function for this object.

#include<iostream>
using namespace std;

class book;
class magazine;

class publication{
    protected:
        string title;
    public:
        publication(string t):title(t){}
        virtual void print(){
            cout<<"Title: "<<title<<endl;
        }
        ~publication(){}
};

class book:public publication{
    protected:
        float accession_number;
    public:
        book(string t,float an):publication(t),accession_number(an){}
        void print(){
            publication::print();
            cout<<"Accession Number: "<<accession_number<<endl;
        }
        ~book(){}
};
class magazine:public publication{
    protected:
        int volume_number;
    public:
        magazine(string t,int vn):publication(t),volume_number(vn){}
        void print(){
            publication::print();
            cout<<"Volume Number: "<<volume_number<<endl;
        }
        ~magazine(){}
};
class journal:public book,public magazine{
    public:
        journal(string t,float an,int vn):book(t,an),magazine(t,vn){}
        void print(){
            book::print();
            magazine::print();
        }
        ~journal(){}
};
int main(){
    journal ieeeoop("IEEE OOP",681.3,1);
    ieeeoop.print();
    return 0;
}