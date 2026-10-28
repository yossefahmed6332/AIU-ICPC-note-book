#include <iostream> 
#include <iomanip>//setprecision() is defined in this header file 
using namespace std; 


void solve () { 
    cout << fixed << setprecision(9);//set precision to 9 decimal places as required in the problem statement
    double const PI =  3.141592653; 
    double r; 
    cin >> r; 
    cout<< PI * (r * r);//apply formula of area of circle A = π * r^2
}
int main() 
{ 
ios::sync_with_stdio(false);
cin.tie(nullptr);

solve();

}