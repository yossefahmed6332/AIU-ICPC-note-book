//very important note : learn 'Over flow topic' and the defference between 'int' and 'long long' data types in C++ before solving this problem

#include <iostream> 
using namespace std; 

void solve () { 
 //define the variables 
 long long a , b ; //if you try to use int , you will get wrong answer in test 3 "learn overflow topic" to understand why we are using long long here
 //taking input from user
    cin >> a >> b ; 
// performing the operations and printing the output 
cout << a << " + " << b << " = " << a + b << endl ;
cout<< a << " * " << b << " = " << a * b << endl ;
cout << a << " - " << b << " = " << a - b << endl; 

}
int main() 
{ 
ios::sync_with_stdio(false);
cin.tie(nullptr);

solve();

}