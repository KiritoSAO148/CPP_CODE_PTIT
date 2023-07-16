#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef vector<ll> vl;
typedef vector<vl> vvl;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define TC() int t; cin >> t; while (t--)
#define el cout << "\n"
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn 

const int MOD = (int) 1e9+7;

void FileIO(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
}

int main(){
    FileIO();
    FastIO;
   	int n; cin >> n;
   	cin.ignore();
   	vector <string> a(n);
   	f0 (i, n) getline(cin, a[i]);
   	set <string> se;
   	f0 (i, n) {
   		stringstream ss(a[i]);
   		string token;
   		while (ss >> token){
   			if (token.find("/") != string::npos) se.insert(token);
   		}
   	}
   	map <string, int> mp;
   	f0 (i, n){
   		vector <string> res;
   		stringstream ss(a[i]);
   		string token;
   		while (ss >> token) res.pb(token);
   		// for (string x : res) cout << x << ' ';
   		if (res[1] == "Xe_con" && res[2] == "5" && res[3] == "IN"){
   			if (mp[res[4]] == 0) mp[res[4]] = 10000;
   			else mp[res[4]] += 10000;
   		}
   		if (res[1] == "Xe_con" && res[2] == "7" && res[3] == "IN"){
   			if (mp[res[4]] == 0) mp[res[4]] = 15000;
   			else mp[res[4]] += 15000;
   		}
   		if (res[1] == "Xe_tai" && res[2] == "2" && res[3] == "IN"){
   			if (mp[res[4]] == 0) mp[res[4]] = 20000;
   			else mp[res[4]] += 20000;
   		}
   		if (res[1] == "Xe_khach" && res[2] == "29" && res[3] == "IN"){
   			if (mp[res[4]] == 0) mp[res[4]] = 50000;
   			else mp[res[4]] += 50000;
   		}
   		if (res[1] == "Xe_khach" && res[2] == "45" && res[3] == "IN"){
   			if (mp[res[4]] == 0) mp[res[4]] = 70000;
   			else mp[res[4]] += 70000;
   		}
   		// cout << mp[res[4]] << '\n';
   	}
   	// for (map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) cout << it->fi << ' ' << it->se << '\n';
   	for (string x : se) cout << x << ": " << mp[x] << '\n';
    return 0;
}