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
	int n,m,p; cin >> n >> m >> p;
	int a[n][m], b[m][p], c[n][p];
	f0 (i,n) f0 (j,m) cin >> a[i][j];
	f0 (i,m) f0(j,p) cin >> b[i][j];
	f0 (i,n){
		f0 (j,p){
			c[i][j]=0;
			f0 (k,m) c[i][j]+=a[i][k]*b[k][j];
			cout << c[i][j] << ' ';
		}
		cout << "\n";
	}
	return 0;
}