#include<iostream>
using namespace std;
template <class t,int size>
class largest {
    t arr[size];
    t maxvalue;
    public:
    largest(){};
    void init (t x[]){
        for (int i=0; i<size; i++){
            arr[i]=x[i];
        }
    }
    void findlargest(){
        maxvalue=arr[0];
        for (int i=1; i<size; i++){
            if (arr[i]>maxvalue){
                maxvalue=arr[i];
            }
        }
    }
    void display(){
        cout<<"largest value is "<<maxvalue<<endl;
    }
    ~largest(){
        cout<<"destructor called"<<endl;
    }
};
int main() {
    int x[10];
    for (int i=0; i<10; i++){
        cin>>x[i];
    }
    largest<int,10> l;
    l.init(x);
    l.findlargest();
    l.display();
}
