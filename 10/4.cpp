#include <iostream>
#include <vector>

using namespace std;

void skakac(vector<vector<int> >& a, int i, int j, int k){
    if(a[i][j] == 0){
        a[i][j] = k;
        if(k == a.size() * a[0].size()){
            for(vector<int> row : a){
                for(int x : row){
                    printf("%2d ", x);
                }
                cout << endl;
            }
            cout << endl;
        }
        else{
            if(i+1 < a.size() && j+2 < a[0].size())
                skakac(a, i+1, j+2, k+1);
            if(i+1 < a.size() && j-2 >= 0)
                skakac(a, i+1, j-2, k+1);
            if(i-1 >= 0 && j+2 < a[0].size())
                skakac(a, i-1, j+2, k+1);
            if(i-1 >= 0 && j-2 >= 0)
                skakac(a, i-1, j-2, k+1);
            if(i+2 < a.size() && j+1 < a[0].size())
                skakac(a, i+2, j+1, k+1);
            if(i+2 < a.size() && j-1 >= 0)
                skakac(a, i+2, j-1, k+1);
            if(i-2 >= 0 && j+1 < a[0].size())
                skakac(a, i-2, j+1, k+1);
            if(i-2 >= 0 && j-1 >= 0)
                skakac(a, i-2, j-1, k+1);
        }
        a[i][j] = 0;
    }
}

int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int> > a(m, vector<int>(n, 0));
    skakac(a, 0, 0, 1);
    cout << ' '; //RTE se dobija kada nema nista u output-u, pa mora vestacki da se ubaci bilo sta u output
    return 0;
}