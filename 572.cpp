#include <bits/stdc++.h>    //oill *
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int n,m;
    int ans;
    
    while (cin >> n >>m && n != 0) {
        ans = 0;
        vector<vector<char>> grid(n, vector<char>(m));
        vecotr<vector<bool>> v(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '@' && !v[i][j]) {  //false means not visited yet
                    dfs(i, j);
                }
            }
        }
    }
    
    return 0;
}

void dfs(int i, int j) {
    if ()
}
