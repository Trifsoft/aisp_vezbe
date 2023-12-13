#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int searchFirst(vector<int> a, int n, int x){
    int l = 0, d = n-1, s;
    while(l < d){
        s = (l+d)/2;
        if(a[s] == x){
            return s;
        }
        if(a[s] < x){
            if(s == n-1 || a[s+1] >= x){
                return s;
            }
            else {
                l = s+1;
            }
        }
        else {
            if(s == 0 || a[s-1] <= x){
                return s-1;
            }
            else {
                d = s-1;
            }
        }
    }
    return -1;
}
int main(){
    int s, n;
    cin >> s >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int count = 0;
    for(int i = 0; i < n-1; i++){
        if(2 * a[i] >= s){
            break;
        }
        if(binary_search(a.begin()+i+1, a.end(), s-a[i])){
            count++;
        }
    }
    cout << count;
    return 0;
}