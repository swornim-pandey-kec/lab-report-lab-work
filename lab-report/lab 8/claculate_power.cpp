#include<iostream>
#include<math.h>
using namespace std;
template<class t1=float>
t1 power(t1 x=5)
{
    return pow(x,3);
}
int main(){
    cout <<power<int>(2)<<endl;
    cout<<power<float>(3)<<endl;
    cout <<power<>(4)<<endl;
    cout<<power()<<endl;
    return 0;
}