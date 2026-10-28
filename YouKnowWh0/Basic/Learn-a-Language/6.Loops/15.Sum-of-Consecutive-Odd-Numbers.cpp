#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
  int t ; 
  cin >>t ; 
  //get the numbers between x and y 
    while (t--){
        long long x ,y ; 
        cin >>x >>y ; 
        long long sum = 0 ; 
        for (long long i =min(x,y)+1 ; i<max(x,y) ; i++){
            if (i%2!=0){
                sum += i ; 
            }
        }
        cout << sum << endl ; 
    }
}
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 