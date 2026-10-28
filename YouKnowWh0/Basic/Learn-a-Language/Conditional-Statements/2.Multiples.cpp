// Notes : multiples are numbers that can be divided by another number without leaving a remainder.
//For example, 10 is a multiple of 5 because 10 divided by 5 equals 2 with no remainder. 
//Similarly, 15 is a multiple of 3 because 15 divided by 3 equals 5 with no remainder. In this code,
// we will check if two given numbers are multiples of each other using conditional statements in C++.
 
// what is "Vise versa means" : "Vise versa" is a Latin phrase that means "the other way around" or "in reverse order."
#include <iostream>
using namespace std;
 
void solve(){ 
    int a,b ; 
    cin >> a >> b ; 
 
    if (a%b ==0 || b%a ==0) 
        cout << "Multiples" << endl ; 
    else 
        cout << "No Multiples" << endl ;
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}