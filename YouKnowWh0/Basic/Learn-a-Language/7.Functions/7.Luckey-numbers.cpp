#include <bitset>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool is_lickey (int num) {
while (num!= 0){
    if (num%10 !=7 && num%10 != 4)
        return false;
    num = num/10;
}
    return true;
}


void solve() {
  bool luckyFound = false ;

    int a , b;
    cin >> a >> b ;
    for (int i =a ; i <= b ; i++) {
        if (is_lickey(i)) {
            luckyFound = true ;
            cout << i << " ";
        }
        }

    if (!luckyFound)
        cout <<-1;

}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

