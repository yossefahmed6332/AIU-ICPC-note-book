//note : study vector in C++

#include <iostream>
#include <vector> 

using namespace std;
void solve() {
int n ; cin >> n ; 

vector <int> v(n); 
int min = INT_MAX ; //initialize max with a very small number
int pos = -1; 
for (int i = 0 ; i < n ; i++) {
        cin >> v[i] ;
        if (v[i] < min) {
            min = v[i] ;
            pos= i+1 ; 
        }

    }
    cout << min <<" " << pos << endl ;   
    

}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

