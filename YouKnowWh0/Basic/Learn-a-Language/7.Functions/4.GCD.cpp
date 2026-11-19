#include <bitset>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void solve() {
int a ,b ;
    cin >> a >> b ;
    for (int i = min(a,b); i >=1 ; i--) {
        if ((a % i == 0) && (b%i==0)) {
            cout << i << endl ;
            break ;
        }
    }

}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

