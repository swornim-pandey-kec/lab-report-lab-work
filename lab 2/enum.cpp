#include<iostream>
using namespace std;
enum position-in-space{
    top,
    bottom,
    left,
    right,
    front,
    back, 
    east,
    west,
    north,
    south,
    eastnorth,
    eastsouth,
    westnorth,
    westsouth

};
// arrar order must match the enum order
const string position-in-space-names[] = {
    "top",
    "bottom",
    "left",
    "right",
    "front",
    "back", 
    "east",
    "west",
    "north",
    "south",
    "eastnorth",
    "eastsouth",
    "westnorth",
    "westsouth"
};

int main() {
    position-in-space pos = top;
    cout << "Position: " << position-in-space-names[pos] << endl;

    pos = eastnorth;
    cout << "Position: " << position-in-space-names[pos] << endl;
    for (int i = 0; i < 14; ++i) {
        cout << "Position: " << position-in-space-names[i] << endl;
    }

    return 0;
}