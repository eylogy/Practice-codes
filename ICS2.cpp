#include <iostream>
using namespace std;

int main() {

    int num;
    int count = 0;
    int avg;
    

    cout << "\nName : Group 5";
    cout << "\nSection : IT11S1\n";
    
    while (count < 10) {
        cout << "Enter a number : ";
        cin >> num;
        count++;

    }

    avg = 10 / num;

    cout << "The average of all numbers = " << avg << endl;



}