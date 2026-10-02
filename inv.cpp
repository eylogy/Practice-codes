#include <iostream>
using namespace std;

int main() {
    const double BASE_FARE  = 10.0;  // covers the first BASE_KM
    const double BASE_KM    = 4.0;
    const double EXTRA_RATE = 2.0;   // per km after BASE_KM
    const double DISCOUNT   = 0.20;  // 20% for students and seniors

    double distance = 0.0;
    int passengerType = 0;
    double fare = 0.0;

    cout << fixed;
    cout.precision(2);

    cout << "================================" << endl;
    cout << "Jeepney Fare Calculator" << endl;
    cout << "================================" << endl;

    cout << "Distance (km): ";
    cin >> distance;

    if (distance <= 0) {
        cout << "Invalid distance. It must be greater than 0." << endl;
        return 1;
    }

    cout << "[1] Regular" << endl;
    cout << "[2] Student and Senior" << endl;
    cout << "Passenger Type: ";
    cin >> passengerType;

    if (passengerType != 1 && passengerType != 2) {
        cout << "Invalid passenger type. Choose 1 or 2." << endl;
        return 1;
    }

    // Same base computation for everyone
    fare = BASE_FARE;
    if (distance > BASE_KM) {
        fare += (distance - BASE_KM) * EXTRA_RATE;
    }

    // Discount only for students and seniors
    if (passengerType == 2) {
        fare -= fare * DISCOUNT;
    }

    cout << "\n================================" << endl;
    cout << "Distance: " << distance << " km" << endl;
    cout << "Passenger Type: " << (passengerType == 1 ? "Regular" : "Student/Senior") << endl;
    cout << "Fare: Php " << fare << endl;
    cout << "Thank you for using the Jeepney Fare Calculator!" << endl;
    cout << "================================" << endl;

    return 0;
}