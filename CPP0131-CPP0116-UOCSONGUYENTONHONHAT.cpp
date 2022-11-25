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

int prime[10001];

void sang3(){
	for (int i=1; i<=10000; i++){
		prime[i]=i;
	}
	for (int i=2; i<=sqrt(10000); i++){
		if (prime[i]){
			for (int j=i*i; j<=10000; j+=i){
				if (prime[j]>i){
					prime[j]=i;
				}
			}
		}
	}
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	sang3();
	while (t--){
		int n; cin >> n;
		for (int i=1; i<=n; i++) cout << prime[i] << " ";
		cout << "\n";
	}
	return 0;
}