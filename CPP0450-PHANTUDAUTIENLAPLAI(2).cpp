#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n; cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	bool used[1000001];
	memset(used, false, sizeof(used));
	for(int i = 0; i < n; i++){
		if(used[a[i]]){
			cout << a[i] << endl; return;
		}
		used[a[i]] = 1;
	}
	cout << "-1\n";
}

int main(){
	int t;
	cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
