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

int solve(string s, int k){
    int n = sz(s);
    int cnt[26];
    int ans = 0;
    f0 (i, n){
        int dis = 0;
        ms(cnt, 0);
        for (int j = i; j < n; ++j){
            if (cnt[s[j] - 'a'] == 0) ++dis;
            cnt[s[j] - 'a']++;
            if (dis == k) ++ans;
            else if (dis > k) break;
        }
    }
    return ans;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string s; cin >> s;
        int k; cin >> k;
        cout << solve(s, k); el;
    }
    return 0;
}