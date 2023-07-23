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

bool check(string s){
	int cnt = 0;
	f0 (i, sz(s)) {
		char c = s[i];
		cnt += c == '@';
		if (c == ' ') return false;
		if (!isdigit(c) && !isalpha(c) && c != '.' && c != '_' && c != '@') return false;
	}
	if (cnt != 1) return false;
	return true;
}

bool isValid(string s){
	if (!check(s)) return false;
	int it = s.find('@');
    string username = s.substr(0, it), domain = s.substr(it + 1);
    if (sz(username) == 0) return false;
	if (sz(username) > 64 || sz(domain) > 254) return false;
	it = domain.find('.');
	if (it == string::npos) return false;
	int idx = 0;
	for (int i = 0; i < sz(domain); ++i){
		if (domain[i] == '.') idx = i;
	}
	string res1 = domain.substr(0, idx), res2 = domain.substr(idx + 1);
	if (res2.size() == 0) return false;
	return true;
}

int main(){
    FileIO();
    FastIO;
    int t; cin >> t;
    cin.ignore();
    while (t--){
    	string s; getline(cin, s);
    	if (isValid(s)) cout << "YES\n";
    	else cout << "NO\n";
    }
    return 0;
}