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

bool check1(string s){
    f0 (i, sz(s) - 1){
        if (s[i] >= s[i + 1]) return false;
    }
    return true;
}

bool check2(string s){
    f0 (i, sz(s) - 1){
        if (s[i] != s[i + 1]) return false;
    }
    return true;
}

bool check3(string s){
    return (s[0] == s[1] && s[1] == s[2]) && (s[3] == s[4]);
}

bool check4(string s){
    f0 (i, sz(s)){
        if (s[i] != '6' && s[i] != '8') return false;
    }
    return true;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string s; cin >> s;
        string bienSo = s.substr(5, 6);
        bienSo.erase(3, 1);
        if (check1(bienSo) || check2(bienSo) || check3(bienSo) || check4(bienSo)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}