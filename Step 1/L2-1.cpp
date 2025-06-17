#include <bits/stdc++.h>
using namespace std;

/*
Pattern 1
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

Pattern 2
*
* *
* * *
* * * *
* * * * *

Pattern 3
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Pattern 4
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5

Pattern 5
* * * * *
* * * *
* * *
* *
*

Pattern 6
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

void pattern1(int n) {
    cout << "\n" << "Pattern 1" << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << "*" << " ";
        cout << endl;
    }
}
void pattern2(int n) {
    cout << "\n" << "Pattern 2" << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < i; j++)  cout << "*" << " ";

        cout << endl;
    }
}
void pattern3(int n) {
    cout << "\n" << "Pattern 3" << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << j << " ";
        cout << endl;
    }
}
void pattern4(int n) {
    cout << "\n" << "Pattern 4" << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << i << " ";
        cout << endl;
    }
}
void pattern5(int n) {
    cout << "\n" << "Pattern 5" << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) cout << "* ";
        cout << endl;
    }
}
void pattern6(int n) {
    cout << "\n" << "Pattern 6" << "\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) cout << j << " ";
        cout << endl;
    }
}

int main() {
    int n = 5;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);

    return 0;
}