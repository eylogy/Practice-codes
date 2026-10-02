#include <iostream>
using namespace std;


// FUNCTIONS 
void showMenu();
void checkBal(double bal);
double deptAmt(double bal);
double withdrawAmt(double bal);


// MENU
void showMenu() {

    cout<<"\n***********************************************************";
    cout<<"\n   TECHNOLOGICAL INSTITUTE OF THE PHILIPPINES QUEZON CITY";
    cout<<"\n       	  First Semester S.Y. 2023-2024";
    cout<<"\n        	  ITE001 Computer Programming 1";
    cout<<"\n    NAME: GROUP 5				SECTION: IT11S1";
    cout<<"\n ***********************************************************";


    cout << "\n T.I.P ATM Machine\n";
    cout << "\n 1. Balance";
    cout << "\n 2. Deposit";
    cout << "\n 3. Withdrawal";
    cout << "\n Choose Transaction (1-3) : ";



} 

// CHECKING BALANCE // CASE 1
void checkBal(double bal) {
    cout << "================================" << endl;
    cout << "Your total balance is " << bal << endl;

}

// DEPOSITING AMOUNT // CASE 2
double deptAmt(double bal) {
    double deposit = 0;

    cout << "================================" << endl;
    cout << "Enter the amount you want to deposit : ";
    cin >> deposit;

    if (deposit > 100) {
        cout << "\n Sorry, your transaction cannot be processed!";
        cout << "\n Maximum Deposit : 100";
    } else {
        bal = bal + deposit;
        cout << "Your Total Balance : " << bal << endl;
    }
    return bal;

}

// WITHDRAWING AMOUNT // CASE 3
double withdrawAmt(double bal) {
    double withdraw = 0;

    cout << "Enter the amount of money you want to withdraw : ";
    cin >> withdraw;

    if (withdraw > 100) {
        cout << "\n Sorry, your transaction cannot be processed!";
        cout << "\n Maximum Withdraw : 100";
    } else if (withdraw > bal) {
        cout << "Sorry, your transaction cannot be processed! The amount is exceed from the Balance.";
    } else {
        bal = bal - withdraw;
        cout << "Your total balance is : " << bal << endl;
    }
    return bal;

} 

// MAIN FUNCTION
int main() {

    double bal = 1000;
    int choice = 0;

    while (choice != 4) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                checkBal(bal);
                break;
            case 2:
                deptAmt(bal);
                break;
            case 3:
                withdrawAmt(bal);
                break;
            
            // CASE 4
            case 4:
                cout << "\nThank you, come again!!" << endl;
                break;
            default:
                cout << "\nInvalid Choice." << endl;
        }
    }


}
