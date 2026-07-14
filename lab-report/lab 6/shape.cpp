// class shape derive class circle rectangle and triangle and show the use of virtual function in this program and in main make a shape poinnter and point to
// each derived class object and call the virtual function using base class pointeralso make pointer a array to store 3 data of 3 devived class and cll using for loop to print thee data
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;


class employee
{
protected:
    string name;
public:
    employee(){}
    employee(string name)
    {
           this->name = name;                                                                                                                                                                                                              
    }
    virtual void show(){
        cout<<"base"<<endl;
    }
    virtual ~employee(){}
};


class developer: public employee{
    int id;
public:
    developer(){}
    developer(int id, string name): employee(name){
        this->id = id;
    }
    virtual void show() override {
        cout<<"developer"<<endl;
    }
    ~developer(){}
};


class manager: public employee{
    int id;
public:
     manager(){}
    manager(int id, string name): employee(name){
        this->id = id;
    }
    virtual void show() override {
        cout<<"manager"<<endl;
    }
    ~manager(){}
};


int main(){
    employee* emps[3];
    emps[0] = new manager(10,"ann");
    emps[1] = new developer(1110,"annnnnn");
    emps[2] = new developer(12, "third_derived");


    for(int i = 0; i < 3; i++) {
        emps[i]->show();
    }


    employee *e1 = emps[0];
    employee *e2 = emps[1];


    manager *m = dynamic_cast<manager*>(e1);
    if(m != nullptr)
    {
        cout<<"casting successful"<<endl;
        cout<< typeid(*e1).name()<<endl;
        m->show();
    }
    else {
        cout<<"casting unsuccessful"<<endl;
    }


    manager *n = dynamic_cast<manager*>(e2);
    if(n != nullptr)
    {
        cout<<"casting successful"<<endl;
        cout<< typeid(*e2).name()<<endl;
        n->show();
    }
    else {
        cout<<"casting unsuccessful"<<endl;
    }


    developer *d = dynamic_cast<developer*>(e2);
    if(d != nullptr)
    {
        cout<<"casting successful"<<endl;
        cout<< typeid(*e2).name()<<endl;
        d->show();
    }
    else {
        cout<<"casting unsuccessful"<<endl;
    }


    developer *e = dynamic_cast<developer*>(e1);
    if(e != nullptr)
    {
        cout<<"casting successful"<<endl;
        cout<< typeid(*e1).name()<<endl;
        e->show();
    }
    else {
        cout<<"casting unsuccessful"<<endl;
    }




    for(int i = 0; i < 3; i++) {
        delete emps[i];
    }
    return 0;
}
