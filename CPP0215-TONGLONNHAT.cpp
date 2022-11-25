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
#define maxn 1003

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

int a[maxn],b[maxn],n,m;

int find (int a[], int b[], int n, int m){
	int sum=0, res=0;
	for (int i=1; i<=n; i++){
		res+=a[i];
		int k=0;
		for (int j=i+1; j<=m; j++) k+=b[j];
		if (res+k>sum) sum=res+k;
	}
	return sum;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		cin >> n >> m;
		f1 (i,n) cin >> a[i];
		f1 (i,m) cin >> b[i];
		int m1=find(a,b,n,m), m2=find(b,a,m,n);
		cout << max(m1,m2) << "\n";
	}
	return 0;
}