#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    deque<int> d;
    d.push_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] > a[i-1]){
            d.push_back(a[i]);
        }
        else{
            d.push_front(a[i]);
        }
    }
    for(int i : d){
        cout << i << ' ';
    }
    return 0;
}