#include <bits/stdc++.h>    //oill *
using namespace std;

int n, m, ans;
vector<vector<char>> grid(n, vector<char>(m));
vecotr<vector<bool>> v(n, vector<bool>(m, false));

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);

    while (cin >> n >>m && n != 0) {
        ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dfs(i, j);
            }
        }
    }
    
    return 0;
}

void dfs(int i, int j) {
    if (i < 0 || j < 0 || i >= n || j >= m) return;     //out side the grid
    if (grid[i][j] == '@' && !v[i][j]) {  //false means not visited yet
        ans++;
        v[i][j] = true;
        dfs(i-1, j);
        dfs(i+1, j);
        dfs(i, j+1);
        dfs(i, j-1);

        dfs(i+1, j+1);
        dfs(i+1, j-1);
        dfs(i-1, j+1);
        dfs(i-1, j-1);
    }
}
