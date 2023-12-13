#include <iostream>
#include <set>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    set<int> s;
    int max = 0;
    bool hasRepeated = false;
    while(n--){
        cin >> x;
        if(s.find(x) != s.end()){
            if(!hasRepeated){
                hasRepeated = true;
                max = x;
            }
            else if(x > max){
                max = x;
            }
        }
        s.insert(x);
    }
    if(hasRepeated){
        cout << max;
    }
    else {
        cout << "nema";
    }
    return 0;
}