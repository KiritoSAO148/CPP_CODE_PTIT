#include <bits/stdc++.h>
using namespace std;

int solve (int a[], int n, int k){
	set<int>s;
	for (int i=0; i<n; i++){
		s.insert(a[i]);
	}
	for (int i=0; i<n; i++){
		int temp=k+a[i];
		if (s.find(temp) != s.end())
		return 1;
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,k;
		cin >> n >> k;
		int a[n];
		for (int i=0; i<n; i++){
			cin >> a[i];
		}
		cout << solve(a,n,k) << "\n";
	}
	return 0;
}
