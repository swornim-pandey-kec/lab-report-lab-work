#include<iostream>
using namespace std;
class animal{
    public :
    void show(){
        cout<<"animal sound"<<endl;

    }

};
class dog:public animal{
    public:
    void show(){
          cout<<"bark"<<endl;
    }
};
int main(){
    animal *a=new animal;
    a->show();
    a=new dog;
    a->show();
    return 0;
    
}
