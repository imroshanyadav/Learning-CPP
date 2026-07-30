#include <iostream>
using namespace std;

class Vehicle {
public:
    string brand = "BMW";

    void honk() {
        cout << "Tuut, tuut!" << endl;
    }
};

class Car : public Vehicle {
public:
    string model = "M4 Competition";
};

int main() {

    Car mycar1;
    string h;

    // mycar1.honk();

    while (true) {
        cout << "Do you want to know my dream car? ";
        cin >> h;
        mycar1.honk();

        if (h == "yes" || h == "Yes") {
            cout << "My dream car is: "
                 << mycar1.brand << " "
                 << mycar1.model << endl;
            break;   // Exit the loop
        } else {
            cout << "Bahut marunga! 😄 'yes' bol.\n\n";
        }
    }

    return 0;
}