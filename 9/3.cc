#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxzarada(vector<int>& a, int l, int d, int& _min, int& _max){
    if(l == d-1){
        _min = _max = a[l];
        return 0;
    }
    int s = (l+d)/2;
    int minL, maxL;
    int resL = maxzarada(a, l, s, minL, maxL);
    int minD, maxD;
    int resD = maxzarada(a, s, d, minD, maxD);
    _min = min(minL, minD);
    _max = max(maxL, maxD);
    return max({resL, resD, maxD - minL});
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int _min, _max;
    cout << maxzarada(a, 0, a.size(), _min, _max);
    return 0;
}