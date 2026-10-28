#include <iostream> 
 using namespace std ; 
 void solve (){ 
    int givenPass ; 
    while (true)//continue forever 
    {
        cin>>givenPass ; 
        if (givenPass==1999){
            cout<<"Correct"; 
            return ; //return means to stop all operation in method 
        }
        else 
        {
            cout <<"Wrong"<<endl ;
        }
    }
 }
 int main () {
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();
 }



 