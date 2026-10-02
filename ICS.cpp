#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;
    int sumEven = 0;
    int productOdd = 1;

    cout << "\nName: Group 5" << endl;
    cout << "Section: IT11S1" << endl;

    while (count < 4) {
        cout << "Enter number " << (count + 1) << ": ";
        cin >> num;

        if (num % 2 == 0) {
            sumEven = num + sumEven;
        } else {
            productOdd = productOdd * num;
        }

        count++;
    }

    cout << "\nThe product of an odd number is: " << productOdd << endl;
    cout << "The sum of even numbers is: " << sumEven << endl;

}