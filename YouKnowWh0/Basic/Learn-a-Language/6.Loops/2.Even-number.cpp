#include <iostream> 
 using namespace std ; 
 void solve (){ 
//use the same logic as the previous problem to print all even numbers from 1 to N then for loop start from 1 to N 
    int n ; 
    cin >> n; 
    bool evenFound = false; // Flag to track if any even number is found
    for (int i =1 ; i<=n;i++)//start from i =1 , if i<=n then increment i by 1  and continue the loop 
        if (i%2==0) {//check if the number is even or not by using modulus operator
            evenFound = true; // Set the flag to true if an even number is found
            cout << i << endl ;
        }
    if (!evenFound) // If no even number was found, print "No Even Numbers"
        cout << -1 << endl;  
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 