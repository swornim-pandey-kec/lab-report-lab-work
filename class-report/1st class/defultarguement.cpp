#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    void showdata();//declared in class and defined outside the class
    void setdata(string="Null",int=0);//gives defult value to the parameter if not passed by user

};
void student:: showdata(){  //:: -> scope operator
    cout<<name<<endl;
    cout<<age<<endl;
}

void student:: setdata(string name, int age){
    this->name=name;//points to the obeject 
    this->age=age;
}

int main(){
    student s1,s2; // craetaed in stack ; firsst in last out
    s1.setdata("hari",15);
    s1.showdata();
    s2.setdata();
    s2.showdata();

    return 0;
}
