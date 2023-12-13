#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long min_razlika(vector<long long> a, long long k){
    long long min = a[k-1] - a[0];
    for(long long i = 1; i < a.size()-k+1; i++){
        if(a[i+k-1] - a[i] < min){
            min = a[i+k-1] - a[i];
        }
    }
    return min * k;
}

int main(){
    int n;
    cin >> n;
    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    long long b;
    cin >> b;
    long long l = 1, d = n, max = 0;
    while(l <= d){
        long long s = l + (d-l)/2;
        if(min_razlika(a, s) <= b){
            l = s+1;
        }
        else {
            d = s-1;
        }
    }
    cout << d << ' ' << min_razlika(a, d);
    return 0;
}