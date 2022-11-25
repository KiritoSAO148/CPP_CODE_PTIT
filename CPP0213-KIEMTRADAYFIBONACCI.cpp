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

int f[25];

void fibo(){
	f[0]=0; f[1]=1;
	for (int i=2; i<=17; i++){
		f[i]=f[i-1]+f[i-2];
	}
	//for (int i=0; i<=17; i++) cout << f[i] << ' ';
}

bool check (int n){
	for (int i=0; i<=17; i++){
		if (f[i]==n) return 1;
	}
	return 0;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	fibo();
	int t;
	cin >> t;
	while (t--){
		int n;
		cin >> n;
		int a[n];
		for (int &x : a) cin >> x;
		for (int x : a){
			if (check(x)){
				cout << x << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}