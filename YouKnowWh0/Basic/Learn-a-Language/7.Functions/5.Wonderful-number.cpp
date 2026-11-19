#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool is_palindrome(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());

    return s == rev;
}

void solve() {
int a ;
    cin >> a ;
    if (a%2==0) {
        cout << "NO" << endl ;
        return ;
    }
    //get binary representation :
    string binary = "";
    while (a!=0) {
        binary+='0'+(a%2);
        a/=2;
    }
    reverse(binary.begin(), binary.end());
   if (is_palindrome(binary))
       cout << "YES" << endl ;
    else
        cout << "NO" << endl ;


}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

