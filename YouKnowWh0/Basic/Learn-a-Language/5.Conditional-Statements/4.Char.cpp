//if you have read the problem statement carefully, you will find that the defference between the ASCII values of the 'a' and 'A' characters is 32. 
//that's mean the defference between 'B' and 'b' is also 32 and so on for all the other characters.
 
#include <iostream>
using namespace std;
 
void solve(){ 
    char letter ; 
    cin >>letter  ; 


    //if letter is uppercase convert it to lowercase by adding 32 to its ASCII value and print it
    if (letter>=97){ //97 is 'a' in ASCII code 
        cout <<(char)(letter-32) << endl ;
    }
    //if letter is lowercase convert it to uppercase by subtracting 32 from its ASCII value and print it
    else if (letter<97){
        cout <<(char)(letter+32) << endl ;
    }

}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}