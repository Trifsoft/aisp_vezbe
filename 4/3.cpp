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
    auto it = unique(a.begin(), a.end());
    a.resize(distance(a.begin(), it));
    int l = 0, d = 0, tmpl = 0, tmpd = 0;
    for(int i = 1; i < a.size(); i++){
        if(a[i] != a[i-1]+1){
            if(tmpd - tmpl > d - l){
                d = tmpd;
                l = tmpl;
            }
            tmpl = tmpd = i;
        }
        else {
            tmpd++;
        }
    }
    if(tmpd - tmpl > d - l){
        d = tmpd;
        l = tmpl;
    }
    for(int i = l; i <= d; i++){
        cout << a[i] << endl;
    }
    return 0;
}