#include <iostream>
#include <map>

using namespace std;

long long maxZajPodniz(string s1, string s2, map<string, map<string, long long> >& m){
    auto it = m.find(s1);
    if(s1 == "" || s2 == ""){
        return 0;
    }
    if(it != end(m)){
        auto it2 = it->second.find(s2);
        if(it2 != end(it->second)){
            return it2->second;
        }
    }
    if(s1[0] == s2[0]){
        return m[s1][s2] = 1 + maxZajPodniz(s1.substr(1), s2.substr(1), m);
    }
    long long a = maxZajPodniz(s1.substr(1), s2, m);
    long long b = maxZajPodniz(s1, s2.substr(1), m);
    return m[s1][s2] = max(a, b); 

}

int main(){
    string s1, s2;
    cin >> s1 >> s2;
    map<string, map<string, long long> > m;
    cout << maxZajPodniz(s1, s2, m);
    return 0;
}