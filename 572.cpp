#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.tie(0);
    cin.tie(0);
    int n,m;
    while (cin >> n >>m) {
        vector<vector<char>> map(n, vector<int>(m));
        vecotr<vector<bool>> v(n, vector<bool>(m), false);
        queue<pair<int> q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> map[i][j];
            }
        }
        
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!v[i][j]) //dfs
            }
        }
    }
    
    return 0;
}

void dfs(vector<vetor<char>>, ){
    
}
