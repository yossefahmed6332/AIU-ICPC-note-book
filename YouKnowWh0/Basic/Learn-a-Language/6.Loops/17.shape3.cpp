#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
    int n;
    cin >> n;

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";

        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";

        cout << '\n';
    }

    // Lower half
    for (int i = n; i >= 1; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";

        for (int j = 0; j < 2 * i - 1; j++)
            cout << "*";

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



 