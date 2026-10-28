#include <iostream>
#include <vector>
#include <algorithm>
#define vi vector
using namespace std;

void solve() {
    int t; cin >> t; 
    while (t-- > 0) {
        int n, k;
        cin >> n >> k;

        vi <int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (k > 1)
            cout << "YES\n"; 
        else {
			if (is_sorted(a.begin(), a.end())) {
				cout << "YES\n";
			}
			else {
				cout << "NO\n";
			}
        }

    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
}