#include <iostream>
using namespace std;

int main()
{
    int accbal = 5000;
    int pincode = 9371;
    int dailywithdrawlimit = 10000;
    int choice;
    int withdraw, amount;

    cout << "===============================" << endl;
    cout << "        BANK NG NUKECITY       " << endl;
    cout << "===============================" << endl;

    cout << "Enter your pin code: ";
    cin >> pincode;
    cout << "===============================" << endl;

    if(pincode = 9371)
    {
        cout << "Welcome sa BANK NG NUKECITY!" << endl;
        cout << "[1] Withdraw" << endl;
        cout << "[2] Account Balance" << endl;
        cout << "[3] Exit" << endl;

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
            cout << "How much do you want to withdraw?: ";
            cin >> withdraw;
            amount = withdraw;

            if(amount % 100 != 0)
            {
                cout << "[ERROR] Must be multiplied by 100" << endl;
            }
            else if(withdraw > dailywithdrawlimit)
            {
                cout << "[ERROR] Amount exceeds the daily limit!" << endl;
            }
            else if(amount > accbal)
            {
                cout << "Insufficient funds." << endl;
            }
            else
            {
                accbal = accbal - amount;
                cout << "===============================" << endl;
                cout << "Withdrawal Successful" << endl;
                cout << "New balance: " << accbal << endl;
                cout << "Thank you!" << endl;
                cout << "===============================" << endl;
                break;

            case 2:
                cout << "===============================" << endl;
                cout << "Your current balance is: " << accbal << endl;
                cout << "===============================" << endl;
                break;

            case 3:
                cout << "===============================" << endl;
                cout << "Thank you for banking with us!" << endl;
                cout << "===============================" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;

                return 0;
            }
        }
    }
}