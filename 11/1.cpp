#include <iostream>
#include <vector>
#include <map>

using namespace std;

long long brojDekodiranja(string s, map<string, long long>& m){
    auto it = m.find(s);
    if(it != end(m)){
        return it->second;
    }
    if(s == ""){
        return 1;
    }
    if(s[0] == '0'){
        return 0;
    }
    if(s.length() == 1){
        return 1;
    }
    if(s[1] == '0'){
        if(s[0] >= '3'){
            return 0;
        }
        return m[s] = brojDekodiranja(s.substr(2), m);
    }
    if(s[0] == '1' || (s[0] == '2' && s[1] <= '6')){
        long long int a = brojDekodiranja(s.substr(2), m);
        long long int b = brojDekodiranja(s.substr(1), m);
        return m[s] = a+b;
    }
    else{
        return m[s] = brojDekodiranja(s.substr(1), m);
    }

}

int main(){
    string s;
    cin >> s;
    map<string, long long> m;
    cout << brojDekodiranja(s, m);
    return 0;
}