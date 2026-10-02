#include <iostream>
using namespace std;

int inserted, item;
int cola = 20, doritos = 30, piattos = 15, water = 10, chocolate = 25;
int price;
int change;

void showMenu()
{
    cout << "WELCOME USER!" << endl;
    cout << "1 - Coca Cola Php " << cola << endl;
    cout << "2 - Doritos Php " << doritos << endl;
    cout << "3 - Piattos Php " << piattos << endl;
    cout << "4 - Water Php " << water << endl;
    cout << "5 - Chocolate Php " << chocolate << endl;
}

int handlePayment(int price)
{
    cout << "Insert money: ";
    cin >> inserted;

    while (inserted < price) {
        cout << "Insufficient coins. Insert more: ";
        int more;
        cin >> more;
        inserted += more;
    }
    
    return inserted - price; // change
}

void printReceipt(string itemName, int price, int paid, int change)
{
    cout << "------ RECEIPT ------" << endl;
    cout << "Item:   " << itemName << endl;
    cout << "Price:  Php " << price << endl;
    cout << "Paid:   Php " << paid << endl;
    cout << "Change: Php " << change << endl;
    cout << "Thank you for purchasing!" << endl;
    cout << "----------------------" << endl;
}

int main()
{
    char again;

    do {
        showMenu();
        cout << "Pick an item to purchase: ";
        cin >> item;

        string itemName;

        switch (item) {
            case 1:
                price = cola;
                itemName = "Coca Cola";
                break;
            case 2:
                price = doritos;
                itemName = "Doritos";
                break;
            case 3:
                price = piattos;
                itemName = "Piattos";
                break;
            case 4:
                price = water;
                itemName = "Water";
                break;
            case 5:
                price = chocolate;
                itemName = "Chocolate";
                break;
            default:
                cout << "Invalid item selected." << endl;
                price = -1;
                break;
        }

        if (price != -1) {
            change = handlePayment(price);
            printReceipt(itemName, price, inserted, change);
        }

        cout << endl << "Buy another item? (y/n): ";
        cin >> again;
        cout << endl;

    } while (again == 'y' || again == 'Y');

    cout << "Goodbye!" << endl;
    return 0;
}