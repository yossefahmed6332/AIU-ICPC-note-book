#include <iostream> 
 using namespace std ; 
 void solve (){ 
//Let's remember simple rules :
/*
you know 2 is only even prime number , so any even integer greater than 2 is not prime number 
*/
 int n ; 
 cin>>n; 
 if(n<2){
    cout<<"NO";
    return ; 
 }
 for(int i=2; i<n ; i++){
   if(n%i==0){
      cout<<"NO";
     return ;
   }
 }
 cout<<"YES";
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 