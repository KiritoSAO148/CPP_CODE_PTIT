#include <iostream>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		long long a[n],b[m];
		for (long long i=0; i<n; i++){
			cin >> a[i];
		}
		for (long long i=0; i<m; i++){
			cin >> b[i];
		}
		long long max=a[0];
		long long min=b[0];
		for (long long i=0; i<n; i++){
			if (a[i]>max){
				max=a[i];
			}
		}
		for (long long i=0; i<m; i++){
			if (b[i]<min){
				min=b[i];
			}
		}
		cout << max*min << endl;
	}
	return 0;
}
