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

int n,k,a[25],ok;

void ktao(){
	f1 (i,k) a[i]=i;
}

void sinh(){
	int i=k;
	while (i>=1 && a[i]==n-k+i) --i;
	if (i==0) ok=0;
	else{
		++a[i];
		for (int j=i+1; j<=k; j++) a[j]=a[j-1]+1;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		cin >> n >> k;
		ktao();
		ok=1;
		while (ok){
			f1 (i,k) cout << a[i];
			cout << ' ';
			sinh();
		}
		cout << "\n";
	}
	return 0;
}