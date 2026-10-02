#include <iostream>
using namespace std;

int main() 
{
    int age;

    cout << "Input your age: ";
    cin >> age;

    if(age < 13)
    {
        cout << "You are a child.";
    }
    else if(age >= 13 && age < 19)
    {
        cout << "You are a teenager.";
    }
    else
    {
        cout << "You are an adult.";
    }
    return 0;
}