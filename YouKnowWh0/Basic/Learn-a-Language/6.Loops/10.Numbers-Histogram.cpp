#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
char s ; 
int t; 
int n ; 
cin >>s ; 
cin >> t ; 


while(t--){
    cin >> n ; 
    while (n--){
        cout << s ; 
    }
    cout << endl ;
}
}
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 