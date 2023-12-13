#include <iostream>
using namespace std;

int main(){
    long long a,b,k;
    cin >> a >> b >> k;
    int x = a%k;
    a -= a%k;
    b -= b%k;
    if(x > 0){
        cout << (b-a)/k;
    }
    else {
        cout << (b-a)/k + 1;
    }
    return 0;
}