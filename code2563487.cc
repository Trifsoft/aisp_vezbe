#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> niz(n);
    for(int i = 0; i < n; i++){
        cin >> niz[i];
        if(i > 0){
            niz[i] += niz[i-1];
        }
    }
    int k, a, b;
    cin >> k;
    vector<int> niz2(k);
    for(int i = 0; i < k; i++){
        cin >> a >> b;
        niz2[i] = a == 0 ? niz[b] : niz[b] - niz[a-1];
    }
    for(int i = 0; i < k; i++){
        cout << niz2[i] << endl;
    }

}