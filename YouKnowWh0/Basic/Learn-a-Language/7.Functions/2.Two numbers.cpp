#include <bitset>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void solve() {
double a ,b ;
    cin >> a >> b ;
    double res = a /b;
    cout <<"floor "<<a<<" / "<<b<<" = "<<floor(res)<<endl;
    cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(res)<<endl;
    cout<<"round "<<a<<" / "<<b<<" = "<<round(res)<<endl;
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

