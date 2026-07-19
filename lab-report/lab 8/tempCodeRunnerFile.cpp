//claculate sum of arrar with no templates type arguments and size
#include <iostream>
using namespace std;

template<class T, int size>
T calculate(const T (&arr)[size]) {
    T sum = 0;
    for(int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    float arr[10];
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    
    cout << calculate(arr) << endl;
    
    return 0;
}