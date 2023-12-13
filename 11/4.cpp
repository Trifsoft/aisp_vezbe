#include <iostream>
#include <vector>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.length();
    vector<vector<int>> v(n+1, vector<int>(n+1, -1));
    for(int i = 0; i <= n; i++){
        v[i][i] = 0;
        if(i < n){
            v[i][i+1] = 1;
        }
    }
    for(int t = 2; t <= n; t++){
        for(int i = 0; i+t <= n; i++){
            if(s[i] == s[i+t-1]){
                v[i][i+t] = v[i+1][i+t-1] + 2;
            }
            else {
                v[i][i+t] = max(v[i+1][i+t], v[i][i+t-1]);
            }
        }
    }
    cout << v[0][n];
    return 0;
}