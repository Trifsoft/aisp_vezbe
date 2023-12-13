#include <iostream>
#include <cmath>

using namespace std;

int broj_brojeva_bez_3_10_na(int n){
    return pow(9, n);
}

int broj_brojeva_bez_3(int n){
    if(n < 10){
        return n < 3 ? n+1 : n;
    }
    int st = log10(n), stepen = pow(10, st), x = n / stepen;
    if(x < 3){
        return x * broj_brojeva_bez_3_10_na(st) + broj_brojeva_bez_3(n % stepen);
    }
    else if(x == 3){
        return 3 * broj_brojeva_bez_3_10_na(st);
    }
    else{
        return (x-1) * broj_brojeva_bez_3_10_na(st) + broj_brojeva_bez_3(n % stepen);
    }
}

int stepen(int os, int st){
    int x = 1;
    for(int i = 0; i < st; i++){
        x *= os;
    }
    return x;
}

int main(){
    int n;
    cin >> n;
    cout << broj_brojeva_bez_3(n);
    return 0;
}