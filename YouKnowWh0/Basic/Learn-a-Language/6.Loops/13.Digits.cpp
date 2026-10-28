#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
    // If you don't understand code , learn mathmatical operation carefully 
int t ; 
cin >>t ; 

while (t--){
    long long n ; 
    cin >>n ; 
        if (n==0)
        cout <<0; 
        
    while (n!=0){
        cout<<n%10 <<" "; 
        n/=10 ; 
    }

    cout <<endl ; 
}

}
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 