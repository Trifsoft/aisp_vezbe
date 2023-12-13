#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Point{
    double x,y;
};
int main(){
    int n;
    cin >> n;
    vector<long double> a(n);
    vector<long double> sum(n);
    for(int i = 0; i < n; i++){
        cin >> sum[i];
        if(i > 0){
            sum[i] += sum[i-1];
        }
        a[i] = sum[i]*sum[i];
    }
    int m;
    cin >> m;
    vector<Point> b(m);
    for(int i = 0; i < m; i++){
        cin >> b[i].x >> b[i].y;
    }
    for(int i = 0; i < m; i++){
        double dist = b[i].x*b[i].x + b[i].y*b[i].y;
        //cout << dist << ' ';
        auto it = lower_bound(a.begin(), a.end(), dist);
        if(it == a.end()){
            cout << "izvan" << endl;
        }
        else {
            cout << it - a.begin() << endl;
        }
        
    }
}