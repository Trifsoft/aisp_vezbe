#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    queue<long long> q2, q3, q5;
    long long t = 1;
    q2.push(2);
    q3.push(3);
    q5.push(5);
    while(n--){
        t = min({q2.front(), q3.front(), q5.front()});
        q2.push(2 * t);
        q3.push(3 * t);
        q5.push(5 * t);
        if(t == q2.front()){
            q2.pop();
        }
        if(t == q3.front()){
            q3.pop();
        }
        if(t == q5.front()){
            q5.pop();
        }
    }
    cout << t;
}