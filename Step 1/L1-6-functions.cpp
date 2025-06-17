// function is a block of code that performs a specific task
// avoid modularise code, increase readability of code, use same code multiple times

// some inbuilt libraries and functions
// bits/stdc++.h -> all the functions and libraries
// math.h -> pow(a,b), sqrt(a), abs(a), max(a,b), min(a,b), swap(a,b)
// algorithm -> reverse(a.begin(),a.end())
// string -> getline(cin,str)
// vector -> sort(v.begin(),v.end())

#include <bits/stdc++.h>
using namespace std;

// void function -> function that does not return anything
void printName(string name) {
    cout << "Hello " << name << endl;
}

// return type function -> function that returns a value
string printName2(string name) {
    return "Hello " + name;
}

// parameterised function -> function that takes parameters
int sum(int a, int b) {
    return a + b;
}

// non-parameterised function -> function that does not take parameters
int sum2() {
    return 6 + 8;
}


//pass by value -> function that takes parameters and returns a value
void doSomething(int n) {
    n += 5;
    cout << "Inside function (int n): " << n << endl;
}

//pass by reference -> function that takes parameters and returns a value
void doSomething2(int &n) {
    n += 5;
    cout << "Inside function (int &n): " << n << endl;
}

int main() {
    string name = "John";
    int a = 10, b = 20;

    printName("John");
    cout << printName2(name) << endl;
    cout << sum(a, b) << endl;
    cout << sum(3, 4) << endl;
    cout << sum2() << endl;

    int n = 10;        
    cout << "original value (int n): " << n << endl;

    //pass by value
    doSomething(n);
    cout << "After function call 1st time (int n): " << n << endl;

    //pass by reference
    doSomething2(n);
    cout << "After function call 2nd time (int n): " << n << endl;

    return 0;
}