#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int row[n];
		int col[m];
		for (int i=0; i<n; i++){
			row[i]=0;
		}
		for (int i=0; i<m; i++){
			col[i]=0;
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (a[i][j]==1){
					row[i]=1;
					col[j]=1;
				}
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				if (row[i]==1 || col[j]==1){
					a[i][j]=1;
				}
			}
		}
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cout << a[i][j] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}

