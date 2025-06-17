#include <iostream>
using namespace std;

/*

Pattern 14
A
A B
A B C
A B C D
A B C D E

Pattern 15
A B C D E
A B C D
A B C
A B
A

Pattern 16
A
B B
C C C
D D D D
E E E E E

Pattern 17
        A
      A B A
    A B C A B
  A B C D A B C
A B C D E A B C D

Pattern 18
E
DE
CDE
BCDE
ABCDE
*/
void pattern14(int n) {
    cout << "\n" << "Pattern 14" << "\n";
    char ch = 'A';
    for (int i = 1; i <= n; i++) {
        ch = 'A';
        for (int j = 1; j <= i; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}
void pattern14method2(int n) {
    cout << "\n" << "Pattern 14 method 2" << "\n";
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch < 'A' + i; ch++) cout << ch << " ";
        cout << endl;
    }
}
void pattern15(int n) {
    cout << "\n" << "Pattern 15" << "\n";
    for (int i = 1; i <= n; i++) {
        for (char ch = 'A'; ch <= 'A' + n - i; ch++) cout << ch << " ";
        cout << endl;
    }
}
void pattern16(int n) {
    cout << "\n" << "Pattern 16" << "\n";
    for (char i = 'A'; i < 'A' + n; i++) {
        for (char j = 'A'; j <= i; j++) cout << i << " ";
        cout << endl;
    }
}
void pattern17(int n) {
    cout << "\n" << "Pattern 17" << "\n";
    for (char i = 'A'; i < 'A' + n; i++) {
        for (int j = 1; j <= 2 * (n - (i - 'A') - 1); j++) cout << " ";
        for (char j = 'A'; j <= i; j++) cout << j << " ";
        for (char j = 'A'; j <= i - 1; j++) cout << j << " ";
        cout << endl;
    }
}
void pattern18(int n) {
    cout << "\n" << "Pattern 18" << "\n";
    for (char i = 'A'; i < 'A' + n; i++) {
        for (char j = (n + 'A') - (i - 'A') - 1; j <= n - 1 + 'A'; j++) cout << j;
        cout << endl;
    }
}
void pattern18method2(int n) {
    cout << "\n" << "Pattern 18 method 2" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = n - i + 1; j <= n; j++) cout << char(j - 1 + 'A');
        cout << endl;
    }
}
void pattern18method3(int n) {
    cout << "\n" << "Pattern 18 method 3" << "\n";
    for (int i = 1; i <= n; i++) {
        for (char j = 'A' + n - i; j <= n + 'A' - 1; j++) cout << j;
        cout << endl;
    }
}
int main() {
    int n = 5;
    pattern14(n);
    pattern14method2(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern18method2(n);
    pattern18method3(n);
    return 0;
}