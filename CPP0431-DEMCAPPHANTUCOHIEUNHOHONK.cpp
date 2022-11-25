#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int find (int a[], int l, int r, int x){
	int res=-1;
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]<x){
			res=m;
			l=m+1;
		}
		else r=m-1;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
	int t; cin >> t;
	while (t--){
		int n,x; cin >> n >> x;
		int a[n];
		for (int i=0; i<n; i++) cin >> a[i];
		sort(a,a+n);
		ll ans=0;
		for (int i=0; i<n-1; i++){
			int res=find(a,i+1,n-1,a[i]+x);
			if (res!=-1) ans+=res-i;
		}
		cout << ans << "\n";
	}
	return 0;
}
