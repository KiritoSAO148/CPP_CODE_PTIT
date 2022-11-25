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

ll hh[10],idx;

int prime (ll n){
	if (n < 2) return 0;
	for (int i=2; i<=sqrt(n); i++){
		if (n%i==0) return 0;
	}
	return 1;
}

void init(){
	for (int i=1; i<=32; i++){
		if (prime(i)){
			ll x=(ll)pow(2,i)-1;
			if (prime(x)){
				ll tmp=(ll)pow(2,i-1)*x;
				hh[idx++]=tmp;
			}
		}
	}
}

int check (ll n){
	for (int i=0; i<10; i++){
		if (n==hh[i]) return 1;
	}
	return 0;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	init();
	while (t--){
		ll n; cin >> n;
		cout << check(n) << "\n";
	}
	return 0;
}