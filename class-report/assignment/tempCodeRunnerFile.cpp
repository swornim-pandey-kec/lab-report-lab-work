// C++ program that demonstrates the use of friend classes for coordinate conversion
//here polar class is declard as friend class in rectangular system for getting data of polar to convert into rectangular or cartidion system

#include<iostream>
#include<cmath>
using namespace std;

class polar;
class cartisin{
    float x;
    float y;
    public:
        cartisin(){
        x=0.0f;
        y=0.0f;
        }

    cartisin(int a, int b):x(a),y(b){}
    ~cartisin(){}
    void getdata(){
        cout<<"Enter value of x :";
        cin>>x;
        cout<<"Enter the value of y :";
        cin>>y;

    }
    void conversion(polar&);

    void showdata(){
        cout<<"x is :"<<x<<endl;
        cout<<"y is :"<<y<<endl;

    }
    friend class polar;

};
class polar{
    float r;
    float theta;
    public:
    polar(){
        r=0;
        theta=0;
    }
    polar(int a, int b):r(a),theta(b){}
    ~polar(){}
     void getdataa(){
        cout<<"Enter value of r :";
        cin>>r;
        cout<<"Enter the value of theta :";
        cin>>theta;

    }
    void conversion(cartisin& p){
        int x=p.x;
        int y=p.y;
        r=sqrt(x*x+y*y);
        theta=atan2(y,x);
    }
    void showdata(){
        cout<<"radius is :"<<r<<endl;
        cout<<"theta is :"<<theta<<endl;
    }
    friend class cartisin;

};

void cartisin::conversion(polar &p) {
    x = p.r * cos(p.theta);
    y = p.r * sin(p.theta);
}

int main(){

    cartisin a;
    polar b;
    a.getdata();
    b.conversion(a);
    b.showdata();

    b.getdataa();
    a.conversion(b);
    a.showdata();

    return 0;
}