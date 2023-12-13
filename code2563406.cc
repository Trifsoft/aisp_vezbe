#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
        a[i] = -1 + 3*a[i] - 3*a[i]*a[i] + 2*a[i]*a[i]*a[i];
    }
    for(int i = 0; i < n; i++){
        cout << a[i] << endl;
    }
}