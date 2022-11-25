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

ll nCk (int n, int k){
	ll res=1;
	k=min(k,n-k);
	for (int i=0; i<k; i++){
		res*=(n-i);
		res/=i+1;
		res%=MOD;
	}
	return res%MOD;
}

ll C[1001][1001];

void tohop(){
	for (int i=0; i<=1000; i++){
		for (int j=0; j<=i; j++){
			if (j==0 || j==i) C[i][j]=1;
			else C[i][j]=(C[i-1][j-1]+C[i-1][j])%MOD;
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	tohop();
	int t; cin >> t;
	while (t--){
		int n,k; cin >> n >> k;
		cout << C[n][k] << "\n";
	}
	return 0;
}