#include <iostream>
#include <vector>

using namespace std;

bool sudoku(vector<string>& a, int ind){
    if(ind == 81){
        return true;
    }
    int i = ind / 9, j = ind % 9;
    if(a[i][j] != '0'){
        return sudoku(a, ind+1);
    }
    vector<bool> br(10, false);
    for(int k = 0; k < 9; k++){
        if(a[i][k] != '0'){
            br[a[i][k] - '0'] = true;
        }
    }
    for(int k = 0; k < 9; k++){
        if(a[k][j] != '0'){
            br[a[k][j] - '0'] = true;
        }
    }
    int ii = 3 * (i/3), jj = 3 * (j/3);
    for(int k = 0; k < 3; k++){
        for(int l = 0; l < 3; l++){
            if(a[ii+k][jj+l] != '0'){
                br[a[ii+k][jj+l] - '0'] = true;
            }
        }
    }
    for(int k = 1; k <= 9; k++){
        if(!br[k]){
            a[i][j] = k + '0';
            if(sudoku(a, ind+1)){
                return true;
            }
        }
    }
    a[i][j] = '0';
    return false;
}

int main(){
    vector<string> a(9);

    for(int i = 0; i < 9; i++){
        cin >> a[i];
    }
    sudoku(a, 0);
    for(int i = 0; i < 9; i++){
        cout << a[i] << endl;
    }
}