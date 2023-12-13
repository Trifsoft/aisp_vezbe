#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    set<int> s;
    int count = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(s.find(-a[i]-a[j]) != s.end()){
                count++;
            }
        }
        s.insert(a[i]);
    }
    cout << count;
    return 0;
}