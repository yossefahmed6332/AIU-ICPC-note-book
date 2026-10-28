#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
//note : learn vector in C++ before solving this problem 
int n ; //length of vector 
cin >> n ;
vector<int> v(n) ; //create a vector of length n

int even = 0 ; //initialize a variable to count the number of even numbers in the vector
int odd = 0 ; //initialize a variable to count the number of odd numbers in the vector
int positive = 0 ;//initialize a variable to count the number of positive numbers in the vector
int negative = 0 ;//initialize a variable to count the number of negative numbers in the vector


for (int i =0 ; i<n ; i++){//loop from 0 to n-1 and read the elements of the vector 
    cin >> v[i] ;


//I used this if-else pattern to get you thinking. Now, think about this: why did I choose this pattern?    
if (v[i]%2==0)
        even ++; 
    else 
        odd++; 
    
    if (v[i]>0)
        positive++; 
    else  if (v[i]<0)
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



 