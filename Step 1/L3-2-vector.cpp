#include <bits/stdc++.h>
using namespace std;

//Vectors
//Vectors are dynamic arrays that can grow or shrink in size

//main function
int main() {

    vector<int> v;
    v.push_back(1),v.emplace_back(2);

    vector<pair<int, int>> vec;
    vec.push_back({1, 2}),vec.emplace_back(3, 4);

    vector<int> v1(5), v2(5, 100), v3(v2);

    vector<int>::iterator it = v.begin();
    cout << *(it);

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) cout << *(it) << " ";
    for (auto it: v) cout << it << " ";

    //v.erase(v.begin() , v.end); (start, end(exclusive))
    //v.insert(v.begin() + 1, 300); (index, value)
    //v.insert(v.begin() + 1, 5, 99); (index, count, value)

    //vector<int> copy(2,6,8);
    // v.insert(v.begin(), copy.begin(), copy.end());

    //v.pop_back();
    //v.size();
    //v.clear();
    //v.empty();
    //v.swap(v2);
    //v.front();    
    //v.back();
    //v.begin();
    //v.end();
    //v.rbegin();
    //v.rend();
    //v.at(index);
    return 0;
}


