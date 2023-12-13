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
    auto it = lower_bound(a.begin()+1, a.end(), 2*a[0]);
    int brParova = 0, i = 1;
    while(it != a.end()){
        brParova++;
        it = lower_bound(it+1, a.end(), 2*a[i++]);
    }
    cout << brParova;
    return 0;
}