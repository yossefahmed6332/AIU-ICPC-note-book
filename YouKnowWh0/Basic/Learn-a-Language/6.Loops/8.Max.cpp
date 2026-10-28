#include <iostream> 
 using namespace std ; 
 void solve (){ 
    int n ; cin >> n ; 
    int max = INT_MIN ; //initialize max to the minimum value of integer

    for (int i =0 ; i<n ; i++){
        int value ; 
        cin >> value ;
        if (value > max) {
            max = value ;
        }
    }

    cout << max ;
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 