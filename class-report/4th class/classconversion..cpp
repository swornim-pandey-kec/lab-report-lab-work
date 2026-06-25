//create a class name rect tha represent rectangular coordinate (x,y)
//create another calss name polar that represnet in terms of (r,theta)
//convert the datatype rect into polar without freind function or class
#include<iostream>
#include<cmath>
using namespace std;
class cartision{
    int x;
    int y;
    public:
    cartision(){
        x-0;
        y=0;
    }
    cartision(int a, int b){x=a;y=b;}
    ~cartision(){}
    void setdata(){
        cout<<"\nEnter value of x :";
        cin>>x;
        cout<<"\nEnter value of y :";
        cin>>y;

    }
    int getx(){
        return x;
    }
    int gety(){
        return y;
    }

};
class polar{
    int r;
    float t;
    public:
    polar(){
        r=0;
        t=0;
    }
    polar(cartision& a){
        int x=a.getx();
        int y=a.gety();
        r=x*x + y*y;
       
        t=atan2(y,x);
    }
    ~polar(){}
    void showdata(){
         cout<<"r is :"<<sqrt(r)<<endl;
         cout<<"t is :"<<t<<endl;
    }

};
int main(){
    cartision a;
    a.setdata();
    polar b=a;
    b.showdata();
    return 0;

}