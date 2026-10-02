#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4, num5, num6, num7;
    int input;

    cout << "1 = MONDAY" << endl;
    cout << "2 = TUESDAY" << endl;
    cout << "3 = WEDNESDAY" << endl;
    cout << "4 = THURSDAY" << endl;
    cout << "5 = FRIDAY" << endl;
    cout << "6 = SATURDAY" << endl;
    cout << "7 = SUNDAY" << endl;
    cin >> input;

    switch(input)
    {
        case 1:
        cout << "MONDAY" << endl;
        break;

        case 2:
        cout << "TUESDAY" << endl;
        break;

        case 3:
        cout << "WEDNESDAY" << endl;
        break;

        case 4:
        cout << "THURSDAY" << endl;
        break;

        case 5:
        cout << "FRIDAY" << endl;
        break;

        case 6:
        cout << "SATURDAY" << endl;
        break;

        case 7:
        cout << "SUNDAY" << endl;
        break;

        default:
        cout << "Invalid input";
        break;
    }   
}
