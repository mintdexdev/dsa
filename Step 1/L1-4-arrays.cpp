// arrays are used to store multiple values in a single variable
// 1d array, 2d array, 3d array or more are called multi-dimensional arrays

#include <bits/stdc++.h>
using namespace std;

int main() {
    //1d array
    int arr1[5] = { 1, 2, 3, 4, 5 };
    // cin >> arr1[0] >> arr1[1] >> arr1[2] >> arr1[3] >> arr1[4];

    cout << arr1[0] << endl; // 1
    cout << arr1[1] << endl; // 2
    cout << arr1[2] << endl; // 3
    cout << arr1[3] << endl; // 4
    cout << arr1[4] << endl; // 5

    for (int i = 0; i < 5; i++) {
        arr1[i] += 10;
        cout << arr1[i] << endl;
    }

    //2d array
    // 9 8 7    
    // 6 5 4
    // 3 2 1

    int arr2[3][3] = { {9, 8, 7}, {6, 5, 4}, {3, 2, 1} };
    // cin >> arr2[0][0] >> arr2[0][1] >> arr2[0][2] >> arr2[1][0] >> arr2[1][1] >> arr2[1][2] >> arr2[2][0] >> arr2[2][1] >> arr2[2][2];  

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    string str = "Hello World !!!";
    cout << str << endl;

    return 0;
}