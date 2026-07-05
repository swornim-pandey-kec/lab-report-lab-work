// class shape derive class circle rectangle and triangle and show the use of virtual function in this program and in main make a shape poinnter and point to
// each derived class object and call the virtual function using base class pointeralso make pointer a array to store 3 data of 3 devived class and cll using for loop to print thee data
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
class employee
{protected:
    string name;
    public:
    employee(){}
    employee(string name)
    {
           this-> name=name  ;                                                                                                                                             
    }
    virtual void show(){
        cout<<"base"<<endl;
    }
    ~ employee(){}
};
class developer:public employee{
    int id;
    public:
    developer(){}
    developer(int id,string name):employee(name){this->id=id;
    }
    virtual void show(){
        cout<<"developer"<<endl;
    }
    ~ developer (){}

};
class manager:public employee{
    int id;
    public:
     manager(){}
    manager(int id,string name):employee(name){this->id=id;
    }
    virtual void show(){
        cout<<"manager"<<endl;
    }
    ~ manager (){}


};
int main(){
employee *e1= new manager(10,"ann");
employee *e2= new developer(1110,"annnnnn");
manager *m=dynamic_cast<manager*>(e1);
if(m!=nullptr)
{
    cout<<"casting sucessful<<"<<endl;
    cout<< typeid(*e1).name()<<endl;
    m->show();
}
else {
    cout<<"casting uncessful"<<endl;
}
manager *n=dynamic_cast<manager*>(e2);
if(n!=nullptr)
{
    cout<<"casting sucessful<<"<<endl;
    cout<< typeid(*e2).name()<<endl;
    n->show();
}
else {
    cout<<"casting uncessful"<<endl;
}
developer *d=dynamic_cast<developer*>(e2);
if(d!=nullptr)
{
    cout<<"casting sucessful<<"<<endl;
    cout<< typeid(*e2).name()<<endl;
    d->show();
}
else {
    cout<<"casting uncessful"<<endl;
}
developer *e=dynamic_cast<developer*>(e1);
if(e!=nullptr)
{
    cout<<"casting sucessful<<"<<endl;
    cout<< typeid(*e1).name()<<endl;
    e->show();
}
else {
    cout<<"casting uncessful"<<endl;
}
return 0;
}