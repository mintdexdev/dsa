#include <bits/stdc++.h>
using namespace std;

//Pairs
//Pairs are used to store two values in a single variable

//main function
int main() {

    int n, d;
    pair<int, int> p ={1,2};
    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;  
   
   //array of pairs
   pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
   cout << arr[0].first << " " << arr[0].second;
   
   
    return 0;
}

