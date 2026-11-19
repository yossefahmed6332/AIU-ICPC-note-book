#include <bitset>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

long long sumOfDigit(int num) {
    long long sum = 0;
    while (num!=0) {
        sum+=num%10;
        num/=10;
    }
    return sum;
}

void solve() {

    int n,a ,b ;
    cin>>n>>a>>b;
    long long res = 0 ;
    for (int i =1 ; i <=n ; i++){
        if (sumOfDigit(i)>=a && sumOfDigit(i)<=b)
            res+= i ;

    }

    cout<<res<<endl;
}
int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve() ;
    }

