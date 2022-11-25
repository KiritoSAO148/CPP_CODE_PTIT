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

int prime (ll n){
	if (n < 2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

int up (ll n){
	int x=n%10;
	n/=10;
	while (n){
		int y=n%10;
		if (y>=x) return 0;
		x=y;
		n/=10;
	}
	return 1;
}

int down (ll n){
	int x=n%10;
	n/=10;
	while (n){
		int y=n%10;
		if (y<=x) return 0;
		x=y;
		n/=10;
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
		int n; cin >> n;
		int cnt=0;
		for (int i=pow(10,n-1); i<pow(10,n); i++){
			if ((up(i) || down(i)) && prime(i)) ++cnt;
		}
		cout << cnt << "\n";
	}
	return 0;
}