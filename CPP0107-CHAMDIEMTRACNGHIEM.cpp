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

string s1 = "ABBADCCABDCCABD";
string s2 = "ACCABCDDBBCDDBB";

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int t; cin >> t;
	while (t--){
		int n; cin >> n;
		double s = 0;
		string res = "";
		f0 (i,15){
			char x; cin >> x;
			res += x;
		}
		if (n == 101){
			f0 (i, sz(res)){
				if (res[i] == s1[i]) s += 10.0 / 15;
			}
		}else{
			f0 (i, sz(res)){
				if (res[i] == s2[i]) s += 10.0 / 15;
			}
		}
		cout << fixed << setprecision(2) << s << "\n";
	}
	return 0;
}