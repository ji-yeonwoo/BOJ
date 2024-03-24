#include <iostream>
using namespace std;

int R, C, ans = 0;
char A[21][21];    
int dr[4] = {-1, 1, 0, 0};
int dc[4] = {0, 0, -1, 1};
bool visited[26];

void dfs(int n, int c, int r){
    ans = max(ans, n);    

    for (int i = 0; i < 4; i++) {
        int nr = r + dr[i];
        int nc = c + dc[i];

        if (nr < 0 || nc < 0 || nc >= R || nr >= C) continue;
        if (visited[A[nc][nr] - 'A']) continue;
        visited[A[nc][nr] - 'A'] = true;
        dfs(n + 1, nc, nr);
        visited[A[nc][nr] - 'A'] = false;
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> R >> C;

    for (int i = 0; i < R; i++) {
        string a; cin >> a;
        for (int j = 0; j < C; j++) {
            A[i][j] = a[j];
        }
    }

    visited[A[0][0] - 'A'] = true;
    dfs(1,0,0);
    cout << ans << endl;
}
