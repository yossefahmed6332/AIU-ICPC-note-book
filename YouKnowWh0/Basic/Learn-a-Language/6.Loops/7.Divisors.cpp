#include <iostream> 
 using namespace std ; 
 void solve (){ 
    int n ; 
    cin >> n; 
    for (int i =1 ; i<=n;i++){//start from i =1 , if i<=n then increment i by 1  and continue the loop 
        if (n%i==0){//check if i is divisor of n or not 
            cout << i << endl ; //print the value of i in each iteration
        }
    }
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 