#include <iostream>
#include <algorithm>
using namespace std;

/*

Pattern 19
* * * * * * * * * *
* * * *     * * * *
* * *         * * *
* *             * *
*                 *
*                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *

Pattern 19b
* * * * * * * * *
* * * *   * * * *
* * *       * * *
* *           * *
*               *
* *           * *
* * *       * * *
* * * *   * * * *
* * * * * * * * *

Pattern 20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

Pattern 20b
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

Pattern 21
* * * * *
*       *
*       *
*       *
* * * * *

Pattern 22
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5

*/

void pattern19(int n) {
    cout << "\n" << "Pattern 19" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) cout << "*";
        for (int j = 1; j <= 2 * i - 2; j++) cout << " ";
        for (int j = i; j <= n; j++) cout << "*";
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";

        cout << endl;
    }
}
void pattern19b(int n) {
    cout << "\n" << "Pattern 19b" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) cout << "*" << " ";
        for (int j = 1; j <= 2 * i - 3; j++) cout << " " << " ";
        for (int j = i; j <= n; j++) {
            if (j == 1) continue;
            cout << "*" << " ";
        }
        cout << endl;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*" << " ";
        for (int j = 1; j <= 2 * (n - i) - 1; j++) cout << " " << " ";
        for (int j = 1; j <= i; j++) {
            if (j == 5) continue;
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void pattern20(int n) {
    cout << "\n" << "Pattern 20" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";

        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n - 1; j++) cout << "*";
        for (int j = 1; j <= 2 * i; j++) cout << " ";
        for (int j = i; j <= n - 1; j++) cout << "*";
        cout << endl;
    }
}
void pattern20b(int n) {
    cout << "\n" << "Pattern 20b" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
        for (int j = 1; j <= i; j++) cout << "*";

        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) cout << "*";
        for (int j = 1; j <= 2 * i - 2; j++) cout << " ";
        for (int j = i; j <= n; j++) cout << "*";
        cout << endl;
    }
}
void pattern21(int n) {
    cout << "\n" << "Pattern 21" << "\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || j == n) cout << "*" << " ";
            else cout << " " << " ";
        }
        cout << endl;
    }
}
void pattern22(int n) {
    cout << "\n" << "Pattern 22" << "\n";

    for (int i = 1; i <= 2 * n - 1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            int top = i-1, left = j-1;
            int right = (2 * n - 1 - j), bottom = (2 * n - 1 - i);
            cout << n-min({ top, left, right, bottom }) << " ";
        }
        cout << endl;
    }
}


int main() {
    int n = 5;
    pattern19(n);
    pattern19b(n);
    pattern20(n);
    pattern20b(n);
    pattern21(n);
    pattern22(n);
    return 0;
}