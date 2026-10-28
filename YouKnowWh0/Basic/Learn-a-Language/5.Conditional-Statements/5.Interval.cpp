
#include <iostream>
using namespace std;
 //we need to check if x is interval or not , so we will use conditional statements in this problem
void solve(){ 
    double x ; 
    cin >>x  ; 

    if (int (x) == x){ //check if x is an integer and lies between 0 and 100 inclusive
        cout << "int " << x << endl ;
    }
    else {
        cout << "float " << x << " " << x - int(x) << endl ;
    }
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}