#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    long double a, b, c, d;
    cin >> a >> b >> c >> d;

    long double left = b * logl(a);
    long double right = d * logl(c);

    if (left > right)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}