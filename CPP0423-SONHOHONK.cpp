#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int n, a[10000001], k;

void solve (){
	cin >> n >> k;
	int cnt=0;
	f0 (i,n){
		cin >> a[i];
		if (a[i]<=k) ++cnt;
	}
	int bad=0;
	for (int i=0; i <cnt; i++){
		if (a[i]>k) ++bad;
	}
	int ans=bad;
	for (int i=0, j=cnt; j<n; i++, j++){
		if (a[i]>k) --bad;
		if (a[j]>k) ++bad;
		ans=min(ans,bad);
	}
	cout << ans << "\n";
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		solve();
	}
	return 0;
}