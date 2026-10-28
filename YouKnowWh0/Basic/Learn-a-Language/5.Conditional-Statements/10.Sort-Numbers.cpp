
//we will solve this problem using vector , learn vector in C++ and how to use it in this problem . Personnaly , i suggest adel nesim youtube channel 

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
void solve(){ 
    vector<int> v(3);

    for (int i = 0; i < 3; i++) {
        cin >> v[i];
    }

    int x = v[0], y = v[1], z = v[2];

    sort(v.begin(), v.end());

    for (int i = 0; i < 3; i++) {
        cout << v[i] << endl;
    }

    cout << endl;
    cout << x << endl << y << endl << z << endl;



}
 
int main() {
 
    //the next two lines are used to speed up the input and output operations in C++. 
ios::sync_with_stdio(false);
cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve(); 
 
}