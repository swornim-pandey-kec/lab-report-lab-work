#include<iostream>
using namespace std;
class animal{
    public :
    virtual void show(){
        cout<<"animal sound"<<endl;

    }
~animal(){
    cout<<"distructor of base class"<<endl;
}
};
class dog:public animal{
    public:
    void show(){
          cout<<"bark"<<endl;
    }
    ~dog(){
    cout<<"distructor of derived dog class"<<endl;
}
};
class cow:public animal{
    public:
    void show(){
          cout<<"mooooh"<<endl;
    }
    ~cow(){
    cout<<"distructor of derived cow class"<<endl;
}
};
int main(){
    animal *a=new animal;
    a->show();
    a=new dog;
    a->show();  
    a= new cow;
    a->show();
    return 0;

}