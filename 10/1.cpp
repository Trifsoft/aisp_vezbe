#include <iostream>
#include <vector>

using namespace std;

void particije(int n, int maxBr, vector<int>& a){
    if(maxBr > n){
        particije(n, n, a);
    }
    else{
        if(n == 0){
            for(int i : a){
                cout << i << ' '; 
            }
            cout << endl;
        }
        else{
            if(maxBr > 1){
                particije(n, maxBr-1, a);
            }
            a.push_back(maxBr);
            particije(n-maxBr, maxBr, a);
            a.pop_back();
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> a;
    particije(n, n, a);
    return 0;
}