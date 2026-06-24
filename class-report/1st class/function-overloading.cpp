#include<iostream>
#include<cmath>
#define PI 3.12
using namespace std;

void area(int r){
    cout<<"Area of circle is "<<PI*r*r<<endl;
}
void area(int l,int b){
    cout<<"Area of rectangle is "<<l*b<<endl;
}
void area(int a,int b, int c){
    int s=(a+b+c)/2;
    cout<<"Area of traingle is "<<sqrt(s*(s-a)*(s-b)*(s-c))<<endl;
}
int main(){
    area(5);//calls area(int r)
    area(5,10);//calls area(int l,int b)
    area(3,4,5);//calls area(int a,int b, int c)
    return 0;
}