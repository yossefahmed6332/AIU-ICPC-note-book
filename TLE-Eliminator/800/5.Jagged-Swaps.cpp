
//before solve this problem , you need to know first LEC in math 0 ....
#include <iostream>
#include <vector>

using namespace std;
//we need to check if x is interval or not , so we will use conditional statements in this problem
void solve(){
    int t ; cin >>t ;
    while (t--> 0 ) {
        int n ; cin >>n ;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) cin >> vec[i];
        //you can choose any number from i =2 (1-based not 0-based ) so you cannot choose first number , it must equal to 1 so that you cam sort list

        if (vec[0]==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}

int main() {

    //the next two lines are used to speed up the input and output operations in C++.
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //call the method solve() to execute the logic written in it
    solve();

}