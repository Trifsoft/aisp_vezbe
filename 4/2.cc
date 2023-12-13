#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int max = 0, tmpmax = 1, ind = 0, i;
    for(i = 1; i < n; i++){
        if(a[i] == a[ind]){
            tmpmax++;
        }
        else{
            if(tmpmax > max){
                max = tmpmax;
            }
            ind = i;
            tmpmax = 1;
        }
    }
    if(tmpmax > max){
        max = tmpmax;
    }
    cout << max;

    return 0;
}