#include <iostream>
using namespace std;

void solve(){ //this is the function where we will write our code which include your logic
    //declaring variables of different data types
    int a;
    long long b;
    char c;
    float d;
    double e;

    //taking variables as input from user
    cin >> a >> b >> c >> d >> e;

    //print the values of the variables in the same order as input , \n means print new line 
    cout << a << '\n'
         << b << '\n'
         << c << '\n'
         << d << '\n'
         << e << '\n';

    return ;
}

int main() {

    //the next two lines are used to speed up the input and output operations in C++. 
    cin.tie(nullptr);

    //call the method solve() to execute the logic written in it
    solve(); 
 
}