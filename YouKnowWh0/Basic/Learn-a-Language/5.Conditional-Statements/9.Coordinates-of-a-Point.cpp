 
//before solve this problem , you need to know first LEC in math 0 .... 
#include <iostream>
 
using namespace std;
 //we need to check if x is interval or not , so we will use conditional statements in this problem
void solve() {
    double x, y;
    cin >> x >> y;
    if (x==0 && y==0)
        cout << "Origem";
    else if (x==0)
        cout << "Eixo Y" ; 
    else if (y==0)
        cout << "Eixo X" ; 
    else if (x>0 && y>0)
        cout <<"Q1"; 
    else if (x<0 && y>0)
        cout <<"Q2"; 
    else if (x<0 && y <0)
        cout << "Q3"; 
    else if (x>0&& y <0 )
        cout << "Q4"; 
    
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++.
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 
}