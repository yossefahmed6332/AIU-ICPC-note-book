#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
while (true){
    int n ,m;
    cin >> n >> m ; //may be n is greater than m or vesta versa , so we will use min and max function to get the minimum and maximum value of n and m
    if (n<=0 || m<=0)
        return ; //return means to stop all operation in method
    long long sum = 0 ; //initialize a variable to store the sum of numbers between n and m
    for (int i = min(n,m) ; i<=max(n,m) ; i++){
        sum += i ; 
        cout << i << " "; //print the value of i in each iteration
    }
    cout << "sum =" << sum << endl ; 
}
}
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 