#include <iostream>
using namespace std;
void grejov_kod(unsigned n, unsigned k){
    //cout << n << ' ' << k << endl;
    if(n > 0){
        if((k & (1 << (n-1))) == 0) { //onda je k manje od 2^(n-1)
            cout << 0;
            grejov_kod(n-1, k);
        }
        else {
            cout << 1;
            if(n == 32)
                grejov_kod(n-1, (~k));
            else
                grejov_kod(n-1, ((1 << n)-1) & (~k));
        }
    }
}

int main(){
    unsigned n, k;
    cin >> n >> k;
    grejov_kod(n, k);
    return 0;
}