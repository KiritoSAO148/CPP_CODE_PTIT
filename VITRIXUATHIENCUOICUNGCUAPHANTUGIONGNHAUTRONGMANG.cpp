#include <bits/stdc++.h>
using namespace std;

int last_pos(int a[], int n, int x){
	int res=-1,l=0,r=n-1;
	while (l <= r){
		int m=(l+r)/2;
		if (a[m] == x){
			res=m+1;
			l=m+1;
		}
		else if (a[m] < x){
			l=m+1;
		}else r=m-1;
	}
	return res;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,x;
		cin >> n >> x;
		int a[n];
		for (int &x : a) cin >> x;
		cout << last_pos(a,n,x) << endl;
	}
	return 0;
}
