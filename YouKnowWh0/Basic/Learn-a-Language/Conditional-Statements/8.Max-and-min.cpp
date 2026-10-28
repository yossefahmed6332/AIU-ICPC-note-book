
#include <iostream>
#include <algorithm> // this library provides built in functions for common algorithms 
#include <cmath> // this library provides built in functions for common mathematical operations , cmath mean C++ math library 

using namespace std;
 //we need to check if x is interval or not , so we will use conditional statements in this problem
void solve(){
int a ,b,c ; 
cin >>a >>b >>c  ; 

//read the next two lines carefully , we will use them to get the minimum and maximum value of a,b,c
int minimum = min(a,min(b,c)) ;
int maximum = max(a,max(b,c));
cout << minimum << " " << maximum << endl ;

}

int main() {

    //the next two lines are used to speed up the input and output operations in C++.
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();

}