#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
int n ; 
cin >> n; 
int even = 0 ; //initialize a variable to count the number of even numbers
int odd = 0 ; //initialize a variable to count the number of odd numbers 
int positive = 0 ;//initialize a variable to count the number of positive numbers
int negative = 0 ;//initialize a variable to count the number of negative numbers


for (int i =0 ; i<n ; i++){//loop from 0 to n-1 and read the elements of the vector 
    int  value  ; 
    cin >>  value;


//I used this if-else pattern to get you thinking. Now, think about this: why did I choose this pattern?    
if (value%2==0)
        even ++; 
    else 
        odd++; 
    
    if (value>0)
        positive++; 
    else  if (value<0)
    negative++;

}

cout <<  "Even: " << even <<"\nOdd: "<<odd <<"\nPositive: "<<positive<<"\nNegative: "<<negative;
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 