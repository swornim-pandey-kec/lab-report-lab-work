#include <iostream>
#include <string>
using namespace std;
class Personal {
private:
    string name;
    int age;
public:
    Personal(string n = "null", int a = 0) : name(n), age(a) {
        cout << "Personal class constructor called" << endl;
    }
    ~Personal() {
        cout << "Personal class destructor called" << endl;
    }

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
}; 
class ID {
private:
    string nationalID;
    string citizenID;
public:
    ID(string nid = "no", string cid = "no") : nationalID(nid), citizenID(cid) {
        cout << "id  class constructor called" << endl;
    }
    ~ID() {
        cout << "id  class destructor called" << endl;
    }

    void setData(string nid, string cid) {
        nationalID = nid;
        citizenID = cid;
    }

    void display() {
        cout << "National ID: " << nationalID << ", Citizen ID: " << citizenID << endl;
    }
};
class Location : public Personal, public ID {
private:
    long int longitude;
    long int latitude;
public:
    Location(string n, int a, string nid, string cid, long int lon, long int lat)
        : Personal(n, a), ID(nid, cid), longitude(lon), latitude(lat) {
        cout << "derived class constructor called" << endl;
    }
    ~Location() {
        cout << "derived class destructor called" << endl;
    }

    void setData(long int lon, long int lat) {
        longitude = lon;
        latitude = lat;
    }

    void display() {   // Overriding display
        Personal::display();
        ID::display();   
        cout << "Longitude: " << longitude << ", Latitude: " << latitude << endl;
    }
};

int main() {
    Location loc("peepal", 25, "111111", "222222", 85, 27); 
    cout << "\n--- Displaying Information ---" << endl;
    loc.display();

    cout << "\n--- Program End ---" << endl;
    return 0;
}
