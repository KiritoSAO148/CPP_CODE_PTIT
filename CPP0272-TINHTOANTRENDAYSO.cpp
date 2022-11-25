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

ll binpow (ll n, ll k){
	if (k==1) return n;
	ll x=binpow(n,k/2);
	if (k%2==0) return x*x%MOD;
	return n*(x*x%MOD)%MOD;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		ll a[n];
		f0 (i,n) cin >> a[i];
		ll g=a[0];
		for (int i=1; i<n; i++) g=__gcd(g,a[i]);
		ll ans=binpow(a[0],g);
		for (int i=1; i<n; i++){
			ans*=binpow(a[i],g);
			ans%=MOD;
		}
		cout << ans << "\n";
	}
	return 0;
}