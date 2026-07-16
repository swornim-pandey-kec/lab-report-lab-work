#include<iostream>
#include<typeinfo>
#include<string>
using namespace std;
class Developer;
class Manager;

class Employee{
    string name;
    public:
    Employee(string name=" "):name(name){}
    virtual ~Employee(){}


};
class Developer:public Employee{
    int id;
    public:
    Developer(string name=" ",int id=0):Employee(name),id(id){}
    ~Developer(){}
};

class Manager:public Employee{
    int id;
    public:
    Manager(string name=" ",int id=0):Employee(name),id(id){}
    ~Manager(){}

};
int main(){
    Employee* e1 = new Manager("John", 101); 
    Manager* m = dynamic_cast<Manager*>(e1);
    if(m!=nullptr){
        cout<<"Dynamic cast successful"<<endl;
    }
    else{
        cout<<"Dynamic cast failed"<<endl;
    }
    Developer* d = dynamic_cast<Developer*>(e1);
    if(d!=nullptr){
        cout<<"Dynamic cast successful"<<endl;
    }
    else{
        cout<<"Dynamic cast failed"<<endl;
    }
    cout<<typeid(*e1).name()<<endl;
    return 0;
}