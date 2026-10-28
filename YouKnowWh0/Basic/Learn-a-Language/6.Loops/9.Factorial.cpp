#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
//befor solving this problem you need to know what is factorial 

int t ; 
cin >>t ; 
while (t--){
    int n ; 
    cin >> n ; 
    long long factorial = 1 ; //initialize a variable to store the factorial of n
    for (int i =1 ; i<=n ; i++){//loop from 1 to n and calculate the factorial of n
        factorial *= i ; //multiply the value of factorial with i in each iteration
    }
    cout << factorial << endl ; //print the value of factorial after the loop ends
}
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 