#include <iostream>
#include <string>
using namespace std;

// Base class
class CricketPlayer {
protected:
    string name;
    int age;
    int matchesPlayed;

public:
    // Constructor
    CricketPlayer(string n, int a, int m) {
        name = n;
        age = a;
        matchesPlayed = m;
        cout << "CricketPlayer constructor called for " << name << endl;
    }

    // Destructor
    ~CricketPlayer() {
        cout << "CricketPlayer destructor called for " << name << endl;
    }

    void displayPlayerInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
    }
};

// Derived class for Bowler
class Bowler : public CricketPlayer {
private:
    int wickets;

public:
    // Constructor
    Bowler(string n, int a, int m, int w) : CricketPlayer(n, a, m) {
        wickets = w;
        cout << "Bowler constructor called for " << n << endl;
    }

    // Destructor
    ~Bowler() {
        cout << "Bowler destructor called for " << name << endl;
    }

    void displayBowlerInfo() {
        displayPlayerInfo();
        cout << "Wickets Taken: " << wickets << endl;
    }
};

// Derived class for Batsman
class Batsman : public CricketPlayer {
private:
    int runs;
    int centuries;

public:
    // Constructor
    Batsman(string n, int a, int m, int r, int c) : CricketPlayer(n, a, m) {
        runs = r;
        centuries = c;
        cout << "Batsman constructor called for " << n << endl;
    }

    // Destructor
    ~Batsman() {
        cout << "Batsman destructor called for " << name << endl;
    }

    void displayBatsmanInfo() {
        displayPlayerInfo();
        cout << "Runs Scored: " << runs << endl;
        cout << "Centuries: " << centuries << endl;
    }
};

// Main function
int main() {
    cout << "Creating Bowler object...\n";
    Bowler bowler("Shane Warne", 32, 145, 708);

    cout << "\nCreating Batsman object...\n";
    Batsman batsman("Sachin Tendulkar", 30, 200, 15921, 51);

    cout << "\nBowler Information:" << endl;
    bowler.displayBowlerInfo();

    cout << "\nBatsman Information:" << endl;
    batsman.displayBatsmanInfo();

    cout << "\nEnd of main function, destructors will be called automatically.\n";
    return 0;
}
