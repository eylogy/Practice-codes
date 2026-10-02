#include <iostream>
using namespace std;

int main() {

    int num;
    int div4 = 0, div7 = 0, div8 = 0;
    int sum_even = 0;

    cout << "\nName : Group 5";
    cout << "\nSection : IT11S1\n";
    
    for (int i = 0; i < 8; i++) {
        cout << "Enter a number : ";
        cin >> num;

        if (num % 4 == 0) {
            div4 = div4 + num;
        }

        if (num % 7 == 0) {
            div7 = div7 + num;
        }

        if (num % 8 == 0) {
            div8 = div8 + num;
        }

    }

    cout << "The sum of all inputted numbers divisible by 4 is " << div4 << endl; 
    cout << "The sum of all inputted numbers divisible by 7 is " << div7 << endl; 
    cout << "The sum of all inputted numbers divisible by 8 is " << div8 << endl; 



}