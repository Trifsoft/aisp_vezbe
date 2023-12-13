#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student{
    string ime;
    int brPoena;
};

bool poredi(Student a, Student b){
    if(a.brPoena > b.brPoena){
        return true;
    }
    else if(a.brPoena < b.brPoena){
        return false;
    }
    else return a.ime < b.ime;
}

int main(){
    int n;
    cin >> n;
    vector<Student> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].ime >> a[i].brPoena;
    }
    sort(a.begin(), a.end(), poredi);
    for(int i = 0; i < n; i++){
        cout << a[i].ime << ' ' << a[i].brPoena << endl; 
    }
    return 0;
}