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
class c:public a,public b{
    int a;
    public://convert cartision into polar (x,y)=(r,t(theta))
#include<iostream>
#include<cmath>
using namespace std;
class cartision{
    int x;
    int y;
    public:
    cartision(){
        x=0;
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
        int getx()
        {
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
         cout<<"radius is :"<<sqrt(r)<<endl;
         cout<<"theta is :"<<t<<endl;
    }

};
int main(){
    cartision c;
    polar p;
    c.setdata();
    p=c;
    p.showdata();
    return 0;
}








