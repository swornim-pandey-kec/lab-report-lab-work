#include <iostream>
using namespace std;
float add (float a, float b){
    cout<<"added throuh non template function"<<endl;
    return a+b;
}
double add (double a, double b){
    return a+b;
}
int add (int a, int b){
     cout<<"added throuh non template function"<<endl;
    return a+b;
}

template <class t1=float,class t2=double>
t1 add (t1 a,t2 b)
{ cout<<"added throuh template function"<<endl;
    return a+b;

}
int main(){
    float a,b;
    cout<<"enter data"<<endl;
    cin>>a;
    cin>>b;
   cout<<add<int,int>(a,b)<<endl;
   cout<<add<double,float>(2.3333333333333,2.6666666666666667);

    
}