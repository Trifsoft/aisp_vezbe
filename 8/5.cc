#include <iostream>
#include <set>

using namespace std;

int main(){
    int s, n, x;
    cin >> s >> n;
    set<int> st;
    int count = 0;
    while(n--){
        cin >> x;
        if(st.find(s-x) != st.end()){
            count++;
        }
        st.insert(x);
    }
    cout << count;
}