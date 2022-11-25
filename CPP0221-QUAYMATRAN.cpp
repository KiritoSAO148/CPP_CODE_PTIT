#include <bits/stdc++.h>
using namespace std;

int R,C;
void rotatematrix(int m, int n, int mat[105][105]){
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n){
    	if (row + 1 == m || col + 1 == n) break;
        prev = mat[row + 1][col];
        for (int i = col; i < n; i++){
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
        }
        row++;
        for (int i = row; i < m; i++){
            curr = mat[i][n-1];
            mat[i][n-1] = prev;
            prev = curr;
        }
        n--;
        if (row < m){
            for (int i = n-1; i >= col; i--){
                curr = mat[m-1][i];
                mat[m-1][i] = prev;
                prev = curr;
            }
        }
        m--;
        if (col < n){
            for (int i = m-1; i >= row; i--){
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
    for (int i=0; i<R; i++){
        for (int j=0; j<C; j++)
        cout << mat[i][j] << " ";
    }
}

int main(){
    int t; cin >> t;
    while (t--){
    	int m,n; cin >> m >> n;
    	int a[105][105];
    	for (int i=0; i<m; i++){
    		for (int j=0; j<n; j++) cin >> a[i][j];
    	}
    	R = m; C = n;
    	rotatematrix(m,n,a);
    	cout << "\n";
    }
    return 0;
}