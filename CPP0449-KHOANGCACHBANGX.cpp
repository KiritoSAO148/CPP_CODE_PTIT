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

int find (int a[], int l, int r, int x){
	while (l<=r){
		int m=(l+r)/2;
		if (a[m]==x) return 1;
		else if (a[m]>x) r=m-1;
		else l=m+1;
	}
	return -1;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		int n,x; cin >> n >> x;
		int a[n];
		f0 (i,n) cin >> a[i];
		sort(a,a+n);
		int ok=-1;
		for (int i=0; i<n-1; i++){
			int res=find(a,i+1,n-1,a[i]+x);
			if (res==1){
				ok=res; break;
			}
		}
		cout << ok << "\n";
	}
	return 0;
}