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
    int t; cin >> t;
    cin.ignore();
    while (t--){
        string s; getline(cin, s);
        string t; getline(cin, t);
        map <string, int> mp;
        vector <string> word1, word2;
        stringstream ss(s);
        string token;
        while (ss >> token) word1.pb(token);
        stringstream ss1(t);
        while (ss1 >> token) word2.pb(token);
        f0 (i, sz(word2)) mp[word2[i]] = 1;
        f0 (i, sz(word1)){
            if (mp[word1[i]] == 1) mp[word1[i]] = 2;
            else mp[word1[i]] == 0;
        }
        for (auto it : mp){
            if (it.se == 0){
                cout << it.fi << ' ';
                // mp.erase(it.fi);
            }
        }
        el;
    }
    return 0;
}