#include <iostream>
using namespace std;
 
void solve(){ //this is the function where we will write our code which include your logic
    //declaring variables of different data types
    int a , b ;  
    cin >>a >>b ; 
    if (a >= b) //if a is greater than or equal to b then print "Welcome" 
        cout << "Yes" << endl; 
    else 
        cout << "No" << endl;
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}