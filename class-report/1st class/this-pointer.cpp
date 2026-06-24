#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int age;

    void setdata(string name, int age){
        (*this).name=name;//points to the obeject 
        this->age=age;//points to the obeject used often then the upper one 
    }
    void showdata();

    void dummy(){
        cout<<this<<endl;// this thous what this pointer is holiing address of the object that is calling this function
    }
};
void student:: showdata(){  //:: -> scope operator
    cout<<name<<endl;
    cout<<age<<endl;
}
int main(){
    student s1,s2; // craetaed in stack ; firsst in last out
    s1.dummy();
    s1.setdata("ram",15);
    s1.showdata();

    return 0;
}