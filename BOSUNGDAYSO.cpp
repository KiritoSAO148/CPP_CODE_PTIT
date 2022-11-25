#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
const int MOD = (int) 1e9+7;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n; cin >> n;
	int a[n];
	vector <int> v;
	for (int i=0; i<n; i++) cin >> a[i];
	int ok=0;
	int res=a[0]-1;
	if (res){
		for (int i=1; i<=res; i++){
			v.push_back(i);
			ok=1;
		}
	}
	for (int i=0; i<n-1; i++){
		int tmp=a[i+1]-a[i];
		//cout << tmp << "\n";
		if (tmp>1){
			for (int j=tmp-1; j>=1; j--){
				v.push_back(a[i+1]-j);
				ok=1;
			}
		}
	}
	if (!ok) cout << "Excellent!\n";
	else for (int x : v) cout << x << '\n';
	return 0;
}