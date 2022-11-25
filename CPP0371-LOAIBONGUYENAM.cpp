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

int vowel (char c){
	return c=='u' || c=='e' || c=='o' || c=='a' || c=='i' || c=='y';
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	string s; cin >> s;
	vector <char> v;
	int n=sz(s);
	f0 (i,n){
		s[i]=tolower(s[i]);
		if (!vowel(s[i])) v.pb(s[i]);
	}
	for (char c : v){
		cout << '.' << c;
	}
	return 0;
}