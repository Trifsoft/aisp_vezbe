#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    multiset<int> a;
    for(int i = 0; i < n; i++){
        cin >> x;
        a.insert(x);
    }
    int m;
    cin >> m;
    multiset<int> b;
    for(int i = 0; i < m; i++){
        cin >> x;
        b.insert(x);
    }
    if(n != m){
        cout << "ne";
    }
    else if(a == b){
        cout << "da";
    }
    else {
        cout << "ne";
    }
    return 0;
}