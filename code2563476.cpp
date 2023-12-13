#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    long long int minduz = 0, tmpminduz;
    long long int l, d = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        minduz += i*a[i];
        d += a[i];
    }
    d -= a[0];
    l = a[0];
    tmpminduz = minduz;
    for(int i = 1; i < n; i++){
        tmpminduz += l-d;
        l += a[i];
        d -= a[i];
        if(tmpminduz < minduz){
            minduz = tmpminduz;
        }
    }
    cout << minduz;
}