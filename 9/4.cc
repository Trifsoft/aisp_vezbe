#include <iostream>

using namespace std;

string ldk(string kld, string lkd){
    if(kld == "")
        return "";
    char koren = kld[0];
    int lsize = lkd.find(koren);
    string lkld = kld.substr(1, lsize);
    string llkd = lkd.substr(0, lsize);
    string dkld = kld.substr(lsize+1);
    string dlkd = lkd.substr(lsize+1);
    return ldk(lkld, llkd) + ldk(dkld, dlkd) + koren;
}

int main(){
    string kld, lkd;
    cin >> kld >> lkd;
    cout << ldk(kld, lkd);

    return 0;
}