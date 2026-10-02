#include <iostream>
#include <string>
using namespace std;

string getSeason(int month) {
    string season;

    switch (month) {
        case 12:
        case 1:
        case 2:
            season = "Winter";
            break;

        case 3:
        case 4:
        case 5:
            season = "Spring";
            break;

        case 6:
        case 7:
        case 8:
            season = "Summer";
            break;

        case 9:
        case 10:
        case 11:
            season = "Fall";
            break;

        default:
            return "Invalid month";
    }

    return season;
}

int main() {
    int month;

    cout << "Enter a month (1-12): ";
    cin >> month;

    cout << "Season: " << getSeason(month) << endl;

    return 0;
}