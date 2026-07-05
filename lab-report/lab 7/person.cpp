//class person from person derive 2 class named student and employee 
// and from 2 class derive another class named teaching assistant 
//suppose the manin base class have function named display 
//show that ambucity occurs in when teaching assistant object is usded to excess 
// that display class and shhow how would solve this problem 
#include<iostream>
using namespace std;
class person{
    protected:
    int a;
    string name;

    public:
    person(){
        a=0;
        name="";
    }
    person(int a,string name){
        this->a=a;
        this->name=name;
    }
    virtual void add(int a,string name){
        this->a=a;
        this->name=name;
    }

    virtual void display(){
        cout<<"hello i am god from base"<<this->a<<this->name<<endl;
    }
    ~person(){}
};
class student: virtual public person{
    string name;
    public:
    void add (string name){
    
        this->name=name;
    }
    virtual void display(){
        //person::display();
        cout<<"hello world from 1st derived student\t"<<this->student::name<<endl;

    }
    ~student(){}
};
class employee: virtual public person{
    string name;
    public:
     void add (string name){
        this->name=name;
    }
    virtual void display(){
        cout<<"hello i am employee 1st derived\t"<<this->employee::name<<endl;
    }
    ~employee(){}
};
class teaching_asistant:public student,public employee{
    string name;
    public:
     teaching_asistant(){
        a=0;
        name="";
    }
    teaching_asistant(string name){
        this->name=name;
    }
    void display(){
        cout<<"i am teaacher"<<this->teaching_asistant::name<<endl;
        person::display();

        student::display();
        employee::display();
    }
    ~teaching_asistant(){}
};
int main(){
    teaching_asistant *t = new teaching_asistant();
    *t=teaching_asistant("hello swornim");
    t->person::add(92,"swornim");
   t->employee::add("senjan");
   t->student::add("subham");
    t->display();
    delete t;
    return 0;
}
