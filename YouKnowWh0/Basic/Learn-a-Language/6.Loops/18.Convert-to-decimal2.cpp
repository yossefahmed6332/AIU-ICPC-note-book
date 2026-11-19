//Read this : https://www.learncpp.com/cpp-tutorial/converting-integers-between-binary-and-decimal-representation

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //take input
    int  t , n ;
    cin >> t;
    while (t--) {
        string binary = "";
        cin >> n ;
        //Convert to binary
        while (n!=0) {
            binary += '0' + n % 10;
            n /= 2;
        }
        //clean binary code
        string CleanedBinary = "";
        for (int i =0; i < binary.length(); i++) {
            if (binary[i] == '1')
                CleanedBinary += '1';
        }
        //turn binary to decimal to get result
        long long res = 0;
        for (int i=1 ; i < CleanedBinary.length(); i++) {
            res += pow(CleanedBinary[i]- '0',(i-1)) ;
        }
        cout << res << endl;

    }

}