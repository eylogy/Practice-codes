#include <iostream>
using namespace std;

int main()
{
    double price, subtotal, total;
    int quantity;
    double tax = 0.08;
    char item;

    cout << "===============================" << endl;
    cout << "              MENU             " << endl;
    cout << "===============================" << endl;
    cout << "[A] Burger - $5.00" << endl;
    cout << "[B] Fries - $2.25" << endl;
    cout << "[C] Soda - $1.75" << endl;
    cout << "[D] Ice Cream - $3.00" << endl;
    cout << "[E] Shawarma - $4.50" << endl;

    cout << "===============================" << endl;
    cout << "Choose an item (A-E): ";
    cin >> item;

    cout << "Input quantity: ";
    cin >> quantity;

    cout << "Input amount: ";
    cin >> price;
    cout << "=============================== \n";

    switch(item)
    {
        case 'A':
            price = 5.00;
            subtotal = price * quantity;
            cout << "----- RECEIPT -----" << endl;
            cout << "You selected Burger" << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Tax: $" << subtotal * tax << endl;

                if (subtotal > 20)
            {
                subtotal = subtotal - (subtotal * 0.10);
            }
                total = subtotal + (subtotal * tax);
                cout << "Total: $" << total << endl;
            break;
        
        case 'B':
            price = 2.25;
            subtotal = price * quantity;
            cout << "----- RECEIPT -----" << endl;
            cout << "You selected Fries" << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Tax: $" << subtotal * tax << endl;

                if (subtotal > 20)
            {
                subtotal = subtotal - (subtotal * 0.10);
            }
                total = subtotal + (subtotal * tax);
                cout << "Total: $" << total << endl;
            break;

        case 'C':
            price = 1.75;
            subtotal = price * quantity;
            cout << "----- RECEIPT -----" << endl;
            cout << "You selected Soda" << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Tax: $" << subtotal * tax << endl;

                if (subtotal > 20)
            {
                subtotal = subtotal - (subtotal * 0.10);
            }
                total = subtotal + (subtotal * tax);
                cout << "Total: $" << total << endl;
            break;

        case 'D':
            price = 3.00;
            subtotal = price * quantity;
            cout << "----- RECEIPT -----" << endl;
            cout << "You selected Ice Cream" << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Tax: $" << subtotal * tax << endl;

                if (subtotal > 20)
            {
                subtotal = subtotal - (subtotal * 0.10);
            }
                total = subtotal + (subtotal * tax);
                cout << "Total: $" << total << endl;
            break;

        case 'E':
            price = 4.50;
            subtotal = price * quantity;
            cout << "----- RECEIPT -----" << endl;
            cout << "You selected Shawarma" << endl;
            cout << "Subtotal: $" << subtotal << endl;
            cout << "Tax: $" << subtotal * tax << endl;

                if (subtotal > 20)
            {
                subtotal = subtotal - (subtotal * 0.10);
            }
                total = subtotal + (subtotal * tax);
                cout << "Total: $" << total << endl;
            break;

        default:
            cout << "Invalid selection" << endl;
            return 0;

    }
}