#include <iostream>
using namespace std;

template <class T>
class Box {
private:
    T content;
public:
    Box(T val) : content(val) {}
    
    T getContent() {
        return content;
    }
    T returnContent(Box<T> t1) {
        return this->content+t1.content;
    }
};

int main() {
    
    Box<int> intBox(123);
    cout << "Integer Box: " << intBox.getContent() << endl;

    Box<string> stringBox("Hello Templates");
    cout << "String Box: " << stringBox.getContent() << endl;
    Box<int> box1(10);
    Box<int> box2(20);
    cout << "Sum: " << box1.returnContent(box2) << endl;

    return 0;
}
