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

int tinh (char c){
	if (c=='A' || c=='B' || c=='C') return 2;
	if (c=='D' || c=='E' || c=='F') return 3;
	if (c=='G' || c=='H' || c=='I') return 4;
	if (c=='J' || c=='K' || c=='L') return 5;
	if (c=='M' || c=='N' || c=='O') return 6;
	if (c=='P' || c=='Q' || c=='R' || c=='S') return 7;
	if (c=='T' || c=='U' || c=='V') return 8;
	return 9;
}

int palind (string s){
	int l=0, r=sz(s)-1;
	while (l<=r){
		if (s[l]!=s[r]) return 0;
		++l; --r;
	}
	return 1;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		string s; cin >> s;
		int n=sz(s);
		f0 (i,n) s[i]=toupper(s[i]);
		string ans="";
		f0 (i,n) ans+=tinh(s[i]);
		if (palind(ans)) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}