#include<iostream>
using namespace std;
class dis{
    int x;
    public:
    explicit dis(int a){
        x=a;
    }
    friend void display(dis);



};
void display(dis d){//implicit constructor called
    cout<<"DIstance :"<<d.x<<endl;
}
int main(){
    display(dis(10));
    return 0;
}
