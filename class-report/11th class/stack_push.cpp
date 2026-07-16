#include<iostream>
using namespace std;
class full{

};
class error{};
class Stack {
    int top;
    int arr[100];
public:
void dispaly(){
    for(int i=100;i>=0;i--){
        if(top==-1){
            throw error();
        }
        cout << arr[i] <<endl;
    }
}
void enter(){
    for (int i=0;i<100;i++){
        push(i);
    }
}
    Stack() : top(-1) {}
    void push(int value)
    {
        if(top==99){
            throw full();
        }
        arr[++top] = value;
    }
    int pop()
    {
        if(top==-1){
            throw error();
        }
        return arr[top--];
    }

};
int main()
{
    Stack s1;
    try{
        s1.enter();
        s1.dispaly(); 
        for (int i=0;i<101;i++){
            cout << s1.pop() << endl;
        }
    }
    catch(full& e){
        cout << "Stack is full!" <<endl;
    }
    catch(error& e){
        cout << "Stack is empty!" <<endl;
    }
    return 0;
}
