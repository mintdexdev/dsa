#include <iostream>
using namespace std;

/*

Pattern 11
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

Pattern 11b
0
1 0
0 1 0
1 0 1 0
0 1 0 1 0

Pattern 12
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

Pattern 12b
1               1
1 2           2 1
1 2 3       3 2 1
1 2 3 4   4 3 2 1
1 2 3 4 5 4 3 2 1

Pattern 13
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void pattern11(int n) {
    cout << "\n" << "Pattern 11" << "\n";
    bool num = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            num = (num == 0) ? 1 : 0;
            cout << num << " ";
        }
        cout << endl;
    }
}
void pattern11b(int n) {
    cout << "\n" << "Pattern 11b" << "\n";
    bool num = 1;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            num = (num == 0) ? 1 : 0;
            cout << num << " ";
        }
        cout << endl;
    }
}
void pattern12(int n) {
    cout << "\n" << "Pattern 12" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        for (int j = 1; j <= 4 * (n - i); j++) cout << " ";
        for (int j = i; j >= 1; j--) cout << j << " ";
        cout << endl;
    }
}
void pattern12b(int n) {
    cout << "\n" << "Pattern 12" << "\n";
    n -= 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        for (int j = 1; j <= 4 * (n - i) + 2; j++) cout << " ";
        for (int j = i; j >= 1; j--) cout << j << " ";
        cout << endl;
    }
    for (int i = 1; i <= n * 2 + 1; i++) {
        cout << (i <= (n + 1) ? i : 2 * (n + 1) - i);
        cout << " ";
    }
    cout << endl;

}
void pattern13(int n) {
    cout << "\n" << "Pattern 13" << "\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

int main() {
    int n = 5;
    pattern11(n);
    pattern11b(n);
    pattern12(n);
    pattern12b(n);
    pattern13(n);
    return 0;
}