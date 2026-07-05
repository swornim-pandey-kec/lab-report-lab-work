#include<iostream>
#include<string>
using namespace std;
enum positioninspace{
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
const string positioninspacenames[] = {
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
     positioninspace pos = top;
     cout << "Position: " << positioninspacenames[pos] << endl;

    pos = eastnorth;
     cout << "Position: " << positioninspacenames[pos] << endl;
    for (int i = 0; i < 14; ++i) {
        cout << "Position: " << positioninspacenames[i] << endl;
    }

    return 0;
}