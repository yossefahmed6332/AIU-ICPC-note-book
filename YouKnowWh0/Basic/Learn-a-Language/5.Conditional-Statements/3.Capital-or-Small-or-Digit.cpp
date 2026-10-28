// Notes : you will use nested if else statements in this problem ! 
// solving is based on your understanding of ASCII values of characters and their comparison with each other !
 
#include <iostream>
using namespace std;
 
void solve(){ 
    char a ; 
    cin >>a ; 
 
    if (a >= 'A' && a <= 'z'){// check if the char is alphabeet .... note: 'A' to 'z' will turn to ASCII code in the background and then it will be compared with each other
        cout << "ALPHA" << endl;
        if (a >= 'A' && a <= 'Z'){//check if char is capital 
            cout << "IS CAPITAL" << endl;
        }
        else if (a >= 'a' && a <= 'z'){//check if  char is small
            cout << "IS SMALL" << endl;
        }
    
    }
    else if (a >= '0' && a <= '9'){
        cout << "IS DIGIT" << endl;
 
 
    }
}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}