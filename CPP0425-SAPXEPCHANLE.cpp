#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		sort (a,a+n);
		if (n%2==0){
			int idx1=0,idx2=n/2;
			for (int i=0; i<n/2; i++){
				cout << a[idx1++] << " " << a[idx2++] << " ";
			}
		}else{
			int idx1=0,idx2=n/2 +1;
			for (int i=0; i<n/2; i++){
				cout << a[idx1++] << " " << a[idx2++] << " ";
			}
			cout << a[idx1];
		}
		cout << endl;
	}
	return 0;
}
