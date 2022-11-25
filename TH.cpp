#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int MOD = 1e9+7;


int main(){
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		int l=0;
//		int dem=1;
		while (1){
		for (int i=l+1; i<n; i++){
			if (a[l]==a[i]){
				cout << a[l];
			}
			l++;
		}
	}
	}
	return 0;
}
