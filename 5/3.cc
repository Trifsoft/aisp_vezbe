#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int s;
    cin >> s;
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int counter = 0;
    for(int i = 0; a[i] < s/2 && i < n; i++){
        if(binary_search(a.begin()+i+1, a.end(), s-a[i])){
            counter++;
        }
    }
    cout << counter;
    return 0;
}