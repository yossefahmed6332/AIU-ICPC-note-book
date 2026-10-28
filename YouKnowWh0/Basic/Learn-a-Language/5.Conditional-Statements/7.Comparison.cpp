
#include <iostream>
using namespace std;
 //we need to check if x is interval or not , so we will use conditional statements in this problem
void solve(){
int a ,b ; 
char c ; 
cin >> a >> c >> b ; 
if (c == '>'){
    if (a > b){
        cout << "Right" << endl ; 
    }
    else {
        cout << "Wrong" << endl ; 
    }
}

else if (c == '<'){
    if (a < b){
        cout << "Right" << endl ; 
    }
    else {
        cout << "Wrong" << endl ; 
    }
}
else if (c == '='){
    if (a == b){
        cout << "Right" << endl ; 
    }
    else {
        cout << "Wrong" << endl ; 
    }
}}

int main() {

    //the next two lines are used to speed up the input and output operations in C++.
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();

}