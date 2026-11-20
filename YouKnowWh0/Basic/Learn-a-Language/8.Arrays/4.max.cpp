//note : study vector in C++

#include <iostream>
#include <vector> 

using namespace std;
void solve() {
int n ; cin >> n ; 

vector <int> v(n); 
int max = INT_MIN ; //initialize max with a very small number
for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        if (v[i] > max) {
            max = v[i] ;
        }

    }
cout << max << endl ; //print the maximum number in the array

}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

