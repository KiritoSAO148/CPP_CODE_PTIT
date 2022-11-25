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

void solve (int a[], int n, int k){
	deque <int> q(k);
	for (int i=0; i<k; i++){
		while (!q.empty() && a[i]>=a[q.back()]) q.pop_back();
		q.push_back(i);
	}
	for (int i=k; i<n; i++){
		cout << a[q.front()] << " ";
		while (!q.empty() && q.front()<=i-k) q.pop_front();
		while (!q.empty() && a[i]>=a[q.back()]) q.pop_back();
		q.push_back(i);
	}
	cout << a[q.front()] << "\n";
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		int n,k; cin >> n >> k;
		int a[n];
		f0 (i,n) cin >> a[i];
		solve(a,n,k);
	}
	return 0;
}