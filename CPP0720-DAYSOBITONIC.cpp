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
		int n; cin >> n;
		int a[n+1];
		f1 (i,n) cin >> a[i];
		vi dp1(n+1), dp2(n+1);
		int res=0;
		for (int i=1; i<=n; i++){
			dp1[i]=1;
			for (int j=1; j<i; j++){
				if (a[i]>a[j]) dp1[i]=max(dp1[i],dp1[j]+1);
			}
		}
		for (int i=n; i>=1; i--){
			dp2[i]=1;
			for (int j=n; j>i; j--){
				if (a[i]>a[j]) dp2[i]=max(dp2[i],dp2[j]+1);
			}
		}
		for (int i=1; i<=n; i++) res=max(res,dp1[i]+dp2[i]-1);
		cout << res << "\n";
	}
	return 0;
}