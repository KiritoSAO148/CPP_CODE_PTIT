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

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		int n,m; cin >> n >> m;
		vi a(n),b(m);
		map <int,int> mp;
		f0 (i,n) cin >> a[i] , mp[a[i]]++;
		f0 (i,m) cin >> b[i];
		f0 (i,m){
			if (mp[b[i]]){
				for (int j=1; j<=mp[b[i]]; j++) cout << b[i] << " ";
			}
			mp.erase(b[i]);
		}
		for (auto it : mp){
			for (int i=1; i<=it.se; i++) cout << it.fi << " ";
		}
		cout << "\n";
		mp.clear();
	}
	return 0;
}