#include <iostream>
using namespace std;
 
void solve(){ 

 int a,b,c; 
     char s,q; 
     cin>> a>>s>>b>>q>>c;
 
     switch(s){
        case('+'):
        if(a+b==c)cout<<"Yes";
        else cout<<a+b;
        break;
        case('-'):
        if(a-b==c)cout<<"Yes";
        else cout<<a-b;
        break;
        case('*'):
        if(a*b==c)cout<<"Yes";
        else cout<<a*b;
        break;
     }
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}