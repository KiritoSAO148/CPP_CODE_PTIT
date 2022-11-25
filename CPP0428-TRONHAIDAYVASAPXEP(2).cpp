#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		long long a[n],b[m];
		for (long long &x : a) cin >> x;
		for (long long &y : b) cin >> y;
		sort (a,a+n);
		sort (b,b+m);
		int i=0,j=0;
		while (i<n && j<m){
			if (a[i] <= b[j]){
				cout << a[i] << " ";
				i++;
			}else{
				cout << b[j] << " ";
				j++;
			}
		}
		while (i<n){
			cout << a[i] << " ";
			i++;
		}
		while (j<m){
			cout << b[j] << " ";
			j++;
		}
		cout << endl;
	}
	return 0;
}
