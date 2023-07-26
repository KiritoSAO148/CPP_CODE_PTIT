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
    string s; getline(cin, s);
    vector <string> name;
    f0 (i, sz(s)) s[i] = tolower(s[i]);
    stringstream ss(s);
    string token;
    while (ss >> token) name.pb(token);
    f0 (i, sz(name) - 1) name[i][0] = toupper(name[i][0]);
    f0 (i, sz(name[sz(name) - 1])) name[sz(name) - 1][i] = toupper(name[sz(name) - 1][i]);
    f0 (i, sz(name) - 1){
        if (i == sz(name) - 2) cout << name[i] << ", ";
        else cout << name[i] << ' ';
    }
    cout << name[sz(name) - 1];
    return 0;
}