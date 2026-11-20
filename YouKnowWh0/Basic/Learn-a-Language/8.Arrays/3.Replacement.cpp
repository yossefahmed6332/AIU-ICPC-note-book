//note : study vector in C++

#include <iostream>
#include <vector> 

using namespace std;
void solve() {
int n ; cin >> n ; 

vector <int> v(n); 
for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        if (v[i]>0)
            v[i] = 1 ;
        else if (v[i]<0)
            v[i] = 2 ;
        cout << v[i] << " " ;
    }


}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

