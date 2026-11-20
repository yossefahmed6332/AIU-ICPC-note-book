//note : study vector in C++

#include <iostream>
#include <vector> 

using namespace std;
void solve() {
int n ; cin >> n ; 

vector <int> v(n); 
for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
  
    }
int  x ; cin >>x ; 
for (int i = 0 ; i < n ; i++) {
        if (v[i] == x) {
            cout << i << endl ; //if the number is found in the array , print its index
            return ;
        }
    }


cout << -1 << endl ; //if the number is not found in the array , print -1


}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

