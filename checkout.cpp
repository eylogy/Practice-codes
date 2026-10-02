#include <iostream>
#include <string>
using namespace std;

string productNames[] = {"Bread", "Milk", "Egg", "Sugar", "Salt"};
double productPrices[] = {35.00, 60.00, 8.00, 45.00, 15.00};

void displayProducts() {
    cout << "\n--- Grocery Checkout Counter ---" << endl;
    for (int i = 0; i < 5; i++) {
        cout << (i + 1) << ". " << productNames[i] << " - Rs. " << productPrices[i] << endl;
    }
}

int getValidProductChoice() {
    int choice;
    cout << "Enter product number (1-5): ";
    cin >> choice;

    while (choice < 1 || choice > 5) {
        cout << "Invalid choice. Enter product number (1-5): ";
        cin >> choice;
    }
    return choice;
}

double addToCart(int productIndex, double currentTotal) {
    double newTotal = currentTotal;

    switch (productIndex) {
        case 1: case 2: case 3: case 4: case 5:
            newTotal += productPrices[productIndex - 1];
            cout << productNames[productIndex - 1] << " added. Current total: Rs. " << newTotal << endl;
            break;
    }
    return newTotal;
}

void printReceipt(double total) {
    cout << "\n--- Receipt ---" << endl;
    cout << "Total amount to be paid: Rs. " << total << endl;
    cout << "Thank you for shopping with us!" << endl;
}

int main() {
    double totalAmount = 0.0;
    char addAnother;

    do {
        displayProducts();
        int choice = getValidProductChoice();
        totalAmount = addToCart(choice, totalAmount);

        cout << "Add another item? (Y/N): ";
        cin >> addAnother;

    } while (addAnother == 'Y' || addAnother == 'y');

    printReceipt(totalAmount);

    return 0;
}