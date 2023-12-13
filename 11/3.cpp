#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    vector<vector<int>> b(n, vector<int>(n));
    b[n-1][n-1] = a[n-1][n-1];
    for(int i = n-2; i >= 0; i--){
        b[i][n-1] = b[i+1][n-1] + a[i][n-1];
        b[n-1][i] = b[n-1][i+1] + a[n-1][i];
    }
    for(int i = n-2; i >= 0; i--){
        b[i][i] = a[i][i] + max(b[i+1][i], b[i][i+1]);
        for(int j = i-1; j >= 0; j--){
            b[i][j] = a[i][j] + max(b[i+1][j], b[i][j+1]);
            b[j][i] = a[j][i] + max(b[j][i+1], b[j+1][i]);
        }
    }
    cout << b[0][0];
    return 0;
}