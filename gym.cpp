#include <iostream>
using namespace std;

int main()
{
    int monthly_fee = 1200;
    int min_age = 16;
    int age;
    int choice;
    int addon = 0;
    string refCode;
    string enteredCode;
    string validCode = "GYM2026";
    double disc = 0.15;
    double seniordisc = 200;
    double total;

    cout << "=========================================" << endl;
    cout << "              GYM NG NUKECITY            " << endl;
    cout << "=========================================" << endl;
    cout << "Input your age: ";
    cin >> age;
    cout << "=========================================" << endl;

    if (age < min_age)
    {
        cout << "You must be at least 16 to sign up without a guardian" << endl;
        cout << "=========================================" << endl;
        return 0;
    }
    else
    {
        cout << "[1] Basic (gym access only)" << endl;
        cout << "[2] Standard (gym + group classes)" << endl;
        cout << "[3] Premium (gym + classes + personal trainer)" << endl;
        cout << "Enter a number: ";
        cin >> choice;
        cout << "=========================================" << endl;
    }

    switch (choice)
    {
        case 1:
            addon = 0;
            cout << "You chose Basic (gym access only)" << endl;
            break;
        case 2:
            addon = 500;
            cout << "You chose Standard (gym + group classes)" << endl;
            break;
        case 3:
            addon = 1500;
            cout << "You chose Premium (gym + classes + personal trainer)" << endl;
            break;
        default:
            cout << "Invalid membership choice." << endl;
            return 0;
    }

    total = monthly_fee + addon;

    cout << "Do you have a referral code? YES/NO: ";
    cin >> refCode;

    if (refCode == "Yes" || refCode == "yes" || refCode == "YES")
    {
        cout << "Input referral code: ";
        cin >> enteredCode;
        cout << "=========================================" << endl;

        if (enteredCode == validCode)
        {
            total = total - (total * disc);
            cout << "Discount Applied!" << endl;
        }
        else
        {
            cout << "Invalid referral code, discount not applied" << endl;
        }
    }
    else
    {
        cout << "You will be charged full price." << endl;
    }

    if (age >= 60)
    {
        total = total - seniordisc;
        cout << "+ Senior discount applied!" << endl;
    }

    cout << "Total: Php" << total << endl;
}