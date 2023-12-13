#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int> m;
    int max = 0;
    string ime;
    while(n--){
        cin >> ime;
        if(++m[ime] > max){
            max = m[ime];
        }
    }
    cout << max;
    return 0;
}