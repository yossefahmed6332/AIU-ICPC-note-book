#include <iostream> 
#include <vector>
 using namespace std ; 
 void solve (){ 
    //use nested loop , outer loop for lines and inner loop for numbers of '*' ! 
    //trace code and you will understand 
    int n ; 
    cin >> n ; 
    for (int i =1 ; i<=n ; i++)
    {
        for (int j =1 ; j<=i ; j++)
        {
            cout <<'*';
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



 