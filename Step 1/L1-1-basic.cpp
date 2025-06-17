// basic input and output
// data types

#include <bits/stdc++.h>
using namespace std;

int main() {

    //to input name 
    // without space
    // cin >> name; 
    //with space (int one line) "\n"
    // getline(cin, name); 

    // to print output
    cout << "Hello World !!!" << endl<<endl;

    //int (byte : 4 ) range : (-2^31 to 2^31-1) or (-10^9 to 10^9)
    //long (byte : 4 ) range : (-2^31 to 2^31-1) or (-10^12 to 10^12)
    //long long (byte : 8 ) range : (-2^63 to 2^63-1) or (-10^18 to 10^18)
    int a1 = 483647 ;
    long b1 = 2147483646 ;
    long long c1 = 82337203685477580;
    cout << "int : " << a1 << endl ;
    cout << "long : " << b1 << endl ;
    cout << "long long : " << c1 << endl<<endl;


    //float (byte : 4 ) range : (-3.4e38 to 3.4e38)
    //double (byte : 8 ) range : (-1.7e308 to 1.7e308)
    //long double (byte : 16 ) range : (-1.2e4932 to 1.2e4932)    
    float a2 = 483647 ;
    double b2 = 2147483646 ;
    long double c2 = 82337203685477580;
    cout << "float : " << a2 << endl ;
    cout << "double : " << b2 << endl ; 
    cout << "long double : " << c2 << endl<<endl;


    //char (byte : 1 ) range : (-128 to 127)    
    char ch = 'A';
    cout << "char : " << ch << endl;
    
    //string (byte : 1000000) 
    string str = "Hello World !!!";
    cout << str << endl;



    return 0;
}