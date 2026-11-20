//note : study vector in C++

#include <iostream>
#include <vector> 

using namespace std;
void solve() {
    int n ; cin >> n ;
vector <int> v(n);
long long sum = 0 ;
for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        sum += v[i] ;
    }
    if (sum<0) sum = -sum ;
    cout << sum << endl ;

}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

