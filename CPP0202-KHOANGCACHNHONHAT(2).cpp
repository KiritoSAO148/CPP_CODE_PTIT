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
		sort(a,a+n);
		int res=INT_MAX;
		for (int i=1; i<n; i++){
			res=min(res,a[i]-a[i-1]);
		}
		cout << res << endl;
	}
	return 0;
}
