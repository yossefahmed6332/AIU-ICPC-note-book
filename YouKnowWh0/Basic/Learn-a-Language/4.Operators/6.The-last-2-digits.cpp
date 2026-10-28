//important note : In previous problems , you learned modulus and you will use this in this problem ! 
#include <iostream> 
#include <string> 
#include <algorithm> 
using namespace std; 


void solve () { 
    long long a ,b , c ,d ; 
    cin >>a >>b >>c >>d ; 
  
    long long result = 1;
    result = (result * (a % 100)) % 100;
    result = (result * (b % 100)) % 100;
    result = (result * (c % 100)) % 100;
    result = (result * (d % 100)) % 100;
 
// if the number is less than 10 , we will print 0 before the number to make it a two digit number as required in the problem statement
    if (result < 10)
        cout << 0;
 // print the result
    cout << result;

}
int main() 
{ 
ios::sync_with_stdio(false);
cin.tie(nullptr);

solve();

}