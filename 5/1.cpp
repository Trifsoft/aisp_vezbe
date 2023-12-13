#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int max_broj_kuca(vector<int> a, int rast){
    int ind = a[0], br_kuca = 1;
    for(int i : a){
        if(i - ind < rast){
            continue;
        }
        else {
            br_kuca++;
            ind = i;
        }
    }
    return br_kuca;
}

int main(){
    int n, l;
    cin >> n >> l;
    vector<int> a(l);
    for(int i = 0; i < l; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    //for(int i = 0; i < l; i++){
    //    cout << a[i] << ' ';
    //}
    //cout << endl;
    if(n == 2){
        cout << a[l-1] - a[0];
        return 0;
    }
    int lp = 1, dp = a[l-1]-a[0];
    while(lp <= dp){
        int s = lp + (dp - lp) / 2;
        int br = max_broj_kuca(a, s);
        //cout << "l: " << lp << " d: " << dp << " s: " << s << " br: " << br << endl;
        if(br < n){
            dp = s - 1;
        }
        else {
            lp = s + 1;
        }
    }
    cout << dp;
    return 0;
}