//important note : get a note book , and write down this formual : 
// summintion of 1 to n = n*(n+1)/2 (you can use a cheat sheet in any contest !)
//important note : learn TLE (Time Limit Exceeded) topic in C++ before solving this problem

#include <iostream> 
using namespace std; 


void solve () { 
    long long n ; cin >>n ; // take input from user 
    long long ans = (n*(n+1))/2 ; // apply the formula to get the answer
    cout << ans ; // print the answer

}
int main() 
{ 
ios::sync_with_stdio(false);
cin.tie(nullptr);

solve();

}s