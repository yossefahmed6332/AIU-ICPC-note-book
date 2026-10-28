#include <iostream> 
 using namespace std ; 
 void solve (){ 
// Hint: If you think the problem is complex, just break it down into smaller problems. That's exactly what you'll do in this problem. 
//you got N  first , then you need all numbers from 1 to 12 , so you will use loop ! 
int n ; 
cin >> n ; 
for (int i =1 ; i<=12 ; i++){
    cout <<n<<" * "<<i<<" = "<<n*i<<endl;
}
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 