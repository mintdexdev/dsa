#include <iostream>
using namespace std;

/*
Pattern 7
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

Pattern 8
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

Pattern 9
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
Pattern 9b
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

Pattern 10
*
* *
* * *
* * * *
* * * * *
* * * * *
* * * *
* * *
* *
*
Pattern 10b
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*

*/

void pattern7(int n) {
  cout << "\n" << "Pattern 7" << "\n";

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << "  ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*" << " ";
    cout << endl;
  }
}
void pattern8(int n) {
  cout << "\n" << "Pattern 8" << "\n";
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i - 1; j++) cout << "  ";
    for (int j = 2 * i - 1; j <= 2 * n - 1; j++) cout << "*" << " ";
    cout << endl;
  }
}
void pattern9(int n) {
  cout << "\n" << "Pattern 9" << "\n";
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << "  ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*" << " ";
    cout << endl;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i - 1; j++) cout << "  ";
    for (int j = 2 * i - 1; j <= 2 * n - 1; j++) cout << "*" << " ";
    cout << endl;
  }
}
void pattern9b(int n) {
  cout << "\n" << "Pattern 9b" << "\n";
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) cout << "  ";
    for (int j = 1; j <= 2 * i - 1; j++) cout << "*" << " ";
    cout << endl;
  }
  for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= i - 1; j++) cout << "  ";
    for (int j = 2 * i - 1; j <= 2 * n - 1; j++) cout << "*" << " ";
    cout << endl;
  }
}
void pattern10(int n) {
  cout << "\n" << "Pattern 10" << "\n";
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "*" << " ";
    cout << endl;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n; j++) cout << "*" << " ";
    cout << endl;
  }
}
void pattern10b(int n) {
  cout << "\n" << "Pattern 10b" << "\n";
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) cout << "*" << " ";
    cout << endl;
  }
  for (int i = 1; i <= n; i++) {
    for (int j = i; j <= n - 1; j++) cout << "*" << " ";
    cout << endl;
  }
}

int main() {
  int n = 5; //rows
  pattern7(n);
  pattern8(n);
  pattern9(n);
  pattern9b(n);
  pattern10(n);
  pattern10b(n);
  return 0;
}