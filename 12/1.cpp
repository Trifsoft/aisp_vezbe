#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int zbir = 0;
    for(int i = 0; i < n/2; i++){
        zbir -= a[i];
        zbir += a[n-i-1];
    }
    cout << 2 * zbir;
    return 0;
}