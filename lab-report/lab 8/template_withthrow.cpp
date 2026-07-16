#include <iostream>
using namespace std;

template <class t, int size>
class stack {
    t arry[size];
    int top;

public:
    class empty {}; 
    class full {};  

    stack() {
        top = -1;
    }

    void push(t a) {
        if (top >= size - 1)
            throw full();
        arry[++top] = a;        
    }

    t pop() {
    
        if (top == -1) 
            throw empty();
        return arry[top--];
    }

    ~stack() {}
};

int main() {
    try {
        stack<int, 10> arr;
        
        cout << "Enter 10 integers:" << endl;
        for (int i = 0; i < 10; i++) {
            int value;
            cin >> value;
            arr.push(value);
            cout << "PushedS: " << arr.push(1) << endl;
        }
         cout << "Popped: " << arr.pop() << endl;
    }

    catch (stack<int, 10>::empty e) {
        cout << "Stack empty" << endl;
    }
    catch (stack<int, 10>::full e) {
        cout << "Stack full" << endl;
    }
    catch(...){
        cout<<"some other exception"<<endl;
    }
    return 0;
}