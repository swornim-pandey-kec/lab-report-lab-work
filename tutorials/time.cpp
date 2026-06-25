#include<iostream>
using namespace std;

class time{
    private:
    int sec;
    int min;
    int hour;
    public:
    time(){
        sec=min=hour=0;
           }
    time(int a,int b,int c):sec(a),min(b),hour(c){ }

    ~time(){
        cout<<"distructor called"<<endl;
    }
    void makereaalvalue(){
        if (sec<0){
            min-=1;
            sec+=60;
        }
        else if(min<0){
            hour-=1;
            min+=60;
        }
        else if(hour<0){
            hour=0;
        }
    }
void display(){
        cout<<"hour\t"<<hour<<"\n minute\t"<<min<<"\nsecond\t"<<sec<<endl;
}
void setdata(){
    cout <<"enter hour,min and sec"<<endl;
    cin>>hour>>min>>sec;


}

friend time operator --(time &);
friend time operator --(time &,int);

};

time operator --(time &t){

    t.hour-=1;
    t.min-=1;
    t.sec-=1;
    t.makereaalvalue();
     return time(t.hour,t.min,t.sec);
}
time operator --(time &t,int ){

    t.hour-=1;
    t.min-=1;
    t.sec-=1;
    t.makereaalvalue();
    return time(t.hour,t.min,t.sec);
}


int main(){
    time t,a,b;
    t.setdata();
    t.makereaalvalue();
    a=t--;
    b=--t;
    a.display();
    b.display();
    return 0;



}