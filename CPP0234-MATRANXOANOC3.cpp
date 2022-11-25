#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m,c;
		cin >> n >> m >> c;
		int a[n][m];
		for (int i=0; i<n; i++){
			for (int j=0; j<m; j++){
				cin >> a[i][j];
			}
		}
		int i,k=0,l=0;
		int dem=0;
		while (k<n && l<m){
			for (i=l; i<m; i++){
				dem++;
				if (dem==c)
					cout << a[k][i];
			}
			k++;
			for (i=k; i<n; i++){
				dem++;
				if (dem==c)
					cout << a[i][m-1];
			}
			m--;
			if (k<n){
				for (i=m-1; i>=l; i--){
					dem++;
					if (dem==c)
						cout << a[n-1][i];
				}
				n--;
			}
			if (l<m){
				for (i=n-1; i>=k; i--){
					dem++;
					if (dem==c)
						cout << a[i][l];
				}
				l++;
			}
		}
		cout << endl;
	}
	return 0;
}
