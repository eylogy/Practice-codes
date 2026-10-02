#include <iostream>
using namespace std;

int main()
{
    string username, password;
    string Correctusn = "Admin";
    string Correctpass = "madz";
    bool LoggedIn = false;

    for (int attempts = 1; attempts <= 5; attempts++) {
        cout << "Attempts " << attempts << " of 5" << endl;

        cout << "Input your username: ";
        cin >> username;

        cout << "Input your password: ";
        cin >> password;

        if (username == Correctusn && password == Correctpass)
        {
            cout << "LOGIN SUCCFESSFUL!";
            LoggedIn = true;
            break;
        }
        else {
            cout << "FAILED TO LOGIN!\n";
        }
    }

    if(!LoggedIn) {
        cout << "\nToo many failed attempts. Access Dennied.\n";
        return 0;
    }

}