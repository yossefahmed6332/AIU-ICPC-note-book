#include <bitset>
#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;



void solve() {
int x ,n ;
    cin >> x >> n;
    long long ans = 0 ;
    for (int i =2 ; i<=n ; i+=2) {
        ans+= pow (x,i);

    }
    cout << ans << endl;
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

