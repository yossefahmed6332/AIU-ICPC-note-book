
#include <iostream> 
using namespace std; 

void solve () { 
long long a ,b ,c ,d ; 
cin >>a >>b >>c >>d ; 
long long x = (a*b)-(c*d); // note : we used long long for x because (a*b) or (c*d) may cause stack overflow 
cout << "Difference = "<< x ; 


}
int main() 
{ 
ios::sync_with_stdio(false);
cin.tie(nullptr);

solve();

}