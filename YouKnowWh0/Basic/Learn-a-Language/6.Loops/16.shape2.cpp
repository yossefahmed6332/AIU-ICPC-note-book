#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // Print spaces
        for (int j = 0; j < n - i; j++) {
            cout << " ";
        }

        // Print stars
        for (int j = 0; j < 2 * i - 1; j++) {
            cout << "*";
        }

        cout << '\n';
    }

}
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 