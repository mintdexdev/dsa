// if-else is used to execute a block of code based on a condition

#include <bits/stdc++.h>
using namespace std;

int main() {

    int age;
    cout << "Enter your age : ";
    cin >> age;
    cout << "Your age is : " << age << endl;

    if (age >= 18) {
        cout << "You are an adult." << endl;
    }
    else if (age < 18 && age > 0) {
        cout << "You are a minor." << endl;
    }
    else {
        cout << "Invalid age." << endl;
    }

    return 0;
}