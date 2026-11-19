#include <bitset>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isprime(int num) {
    if (num < 2)
        return false;

    for (int i = num / 2; i >= 2; i--) {
        if (num % i == 0)
            return false;
    }

    return true;
}


void solve() {
    int n ; cin >> n;
    cout << 2 <<" ";

    for (int i =3 ; i<=n ; i+=2) {
        if (isprime(i))
            cout << i << " ";
    }
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

