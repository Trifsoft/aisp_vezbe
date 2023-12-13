#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    long long int maks = 0;
    long long int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maks += i*a[i];
        sum += a[i];
    }
    //cout << maks << endl;
    long long int tmpmaks = maks;
    for(int i = 0; i < n-1; i++){
        tmpmaks -= sum; 
        tmpmaks += n*a[i];
        if(tmpmaks % 1234567 > maks % 1234567){
            maks = tmpmaks;
        }
        //cout << maks << endl;
    }
    cout << maks % 1234567;
    return 0;
}