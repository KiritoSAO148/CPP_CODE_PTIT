#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		int m1= *max_element(a,a+n);
		int m2= *min_element(b,b+n);
		cout << 1ll*  m1 * m2 << endl;
	}
	return 0;
}
