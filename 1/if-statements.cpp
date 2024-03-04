#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "What is your age?\n";
    cin >> age;
    if(age >= 18) {
        cout << "Welcome to our site...";
    } 
    else {
        cout << "Redirect...";
    }
}