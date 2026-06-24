/*A shop owner approaches you to develop software for managing their store. The system
should maintain records for three items: rice, meat, and potatoes. It must track how many units
of each item have been sold, how many remain in stock, and also store the price of each item,
which should be updatable when needed. How would you design a solution for this problem?
Write a complete C++ class that includes appropriate constructors, a destructor, necessary data
members, and member functions, friend function, friend class where required to handle these
requirements.*/

#include <iostream>
#include <string>
#include<iomanip>
using namespace std;


class owner;

class goods {
    string goodsname;
    int amount;
    int sold;
    float costper1;

public:
    goods() {
        goodsname = "Null";
        amount = 0;
        sold = 0;
        costper1 = 0.0f;
    }
    
    goods(string a, int b, int c, float d) : goodsname(a), amount(b), sold(c), costper1(d) {}
    ~goods() {}

    bool sell(int quantity) {
        if (quantity > amount) {
            return false;
        } else {
            amount -= quantity;
            sold += quantity;
            return true;
        }
    }

    friend class owner;
};

class owner {
    goods chest[3];

public:
    owner() {
        chest[0] = goods("flour", 100, 0, 100.0f);     
        chest[1] = goods("srimps", 50, 0, 420.0f);     
        chest[2] = goods("steak", 150, 0, 40.0f); 
    }


    bool updateprice() {
        int choice;
        float newPrice;
        cout << "\nWhich item's price do you want to update?\n";
        for (int i = 0; i < 3; i++) {
            cout << i + 1 << ". " << chest[i].goodsname << "\n";
        }
        cout << "Enter choice (1-3): ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter new price for " << chest[choice - 1].goodsname << ": Rs";
            cin >> newPrice;
            chest[choice - 1].costper1 = newPrice;
            cout << "Price updated successfully!\n";
            return true;
        }
        cout << "Invalid choice.\n";
        return false;
    }


    void displaydata() {
        for (int i = 0; i < 3; i++) {
            cout  <<left << setw(12)<< chest[i].goodsname << chest[i].sold << "\t  | " << chest[i].amount << "\t\t    | Rs" << chest[i].costper1 << "\n";
            cout<<"-------------------------------------swornim pandey------------------------------------------"<<endl;
        }
       
    }

    void makeSale(int i, int qty) {
        if (chest[i].sell(qty)) {
            cout << "Sold " << qty << " units of " << chest[i].goodsname << "\n";
        } else {
            cout << "expected sale not reaached " << qty << " units of " << chest[i].goodsname << " (Out of stock)\n";
        }
    }
};

int main() {
    owner a;

    a.displaydata();

   
    a.makeSale(0, 10); 
    a.makeSale(2, 5);  

    a.displaydata();

    a.updateprice();

    a.displaydata();

    return 0;
}