#include<iostream>
using namespace std;
class a{
    protected:
    int a;
    public:
    void inut(){

        cout<<"enter data"<<endl;
        cin>>a;

    }
    void display(){
        cout<<"the value is"<<a;
    }

};
class b{
    protected:
    int a;
    
    public:
    void inut(){

        cout<<"enter data"<<endl;
        cin>>a;

    }
    void display(){
        cout<<"the value is"<<a;
    }
};
class cass:public a,public b{
    int a;
    public:
    void inut(){

       a::inut();
       b::inut();
       cout<<"enter data"<<endl;
       cin>>a;

    }
    void display(){
        a::display();
        b::display();
        cout<<"the value of a (int):"<<a<<endl;
        cout<<"sum is :"<<a::a+b::a+a;
    }

};
int main (){
    cass obj;
    obj.inut();
    obj.display();
    return 0;
}






