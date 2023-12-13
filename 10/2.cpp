#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double bratskaPodela(vector<double>& a, int i, double &b1, double &b2){
    if(i == a.size()){
        return abs(b1 - b2);
    }
    else{
        b1 += a[i];
        double x = bratskaPodela(a, i+1, b1, b2);
        b1 -= a[i];
        b2 += a[i];
        double y = bratskaPodela(a, i+1, b1, b2);
        b2 -= a[i];
        return min(x, y);

    }
}

int main(){
    int n;
    cin >> n;
    vector<double> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    double brat1 = 0, brat2 = 0;
    cout << fixed << setprecision(2) << bratskaPodela(a, 0, brat1, brat2);
}