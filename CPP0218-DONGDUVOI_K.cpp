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
#define maxn 100001

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int n,a[maxn],ans,ma=-1e9,mi=1e9;
vi v;

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		v.clear();
		ma=-1e9; mi=1e9; ans=0;
		cin >> n;
		f1 (i,n){
			cin >> a[i];
			ma=max(ma,a[i]);
			mi=min(mi,a[i]);
		}
		int d=ma-mi;
		for (int i=1; i<=sqrt(d); i++){
			if (d%i==0){
				v.pb(i);
				if (i!=d/i) v.pb(d/i);
			}
		}
		//sort(all(v));
		//for (int x : v) cout << x << " ";
		for (int x : v){
			int tmp=a[1]%x;
			int ok=1;
			for (int j=2; j<=n; j++){
				if (a[j]%x!=tmp){
					ok=0;
					break;
				}
			}
			if (ok) ++ans;
		}
		cout << ans << "\n";
	}
	return 0;
}