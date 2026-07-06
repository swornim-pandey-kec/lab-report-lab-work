// class player contain member variable name age and no of matchPlayed from this derive 2 class boller and batsman
// boller has no of wicket as a member variable and batsman has  member variable of no of run and centuries
//  use appropritae member functiona s member fun to rperesent the respective data
#include <iostream>
#include <string>
using namespace std;

// Base class (Abstract)
class cricketer {
protected:
    string name;
    int age;
    int matchesPlayed;

public:
    cricketer(string n, int a, int m) {
        name = n;
        age = a;
        matchesPlayed = m;
        cout << "CricketPlayer constructor called for " << name << endl;
    }


    virtual ~cricketer() {
        cout << "CricketPlayer destructor called for " << name << endl;
    }
    virtual void show()= 0;
};

// Derived class for Bowler
class Bowler : public cricketer {
private:
    int wickets;

public:
    Bowler(string n, int a, int m, int w) : cricketer(n, a, m), wickets(w) {
    }

    ~Bowler() {
        cout << "\n\nBowler destructor called for " << name << endl;
    }

    
    void show(){
        cout << "\n\nBowler Information:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Wickets Taken:" << wickets<<"\n\n " << endl;
    }
};


class Batsman : public cricketer {
private:
    int runs;
    int centuries;

public:
    Batsman(string n, int a, int m, int r, int c) : cricketer(n, a, m), runs(r) {
        this->centuries=r/100;
    }

    ~Batsman() {
        cout << "\n\nBatsman destructor called for " << name << endl;
    }

    void show()  {
        cout << "\n\nBatsman Information:" << endl;
        cout << "Name: " << name << endl;

        cout << "Age: " << age << endl;
        cout << "Matches Played: " << matchesPlayed << endl;
        cout << "Runs Scored: " << runs << endl;
        cout << "Centuries: " << centuries<<"\n\n "<< endl;
    }
};

// Main function
int main() {
    
   cricketer* bowler = new Bowler("Shane Warne", 32, 145, 708);

    
    cricketer* batsman = new Batsman("Sachin Tendulkar", 30, 200, 15921, 51);

  
   bowler->show();  
    batsman->show(); 

   

    delete bowler;
    delete batsman;

    return 0;
}


