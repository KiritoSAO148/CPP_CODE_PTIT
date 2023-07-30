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
    string mnv = "NV01";
    string name; getline(cin, name);
    int luongcb; cin >> luongcb;
    int songaycong; cin >> songaycong;
    string chucvu; cin >> chucvu;
    int tienluong = luongcb * songaycong;
    int tienthuong = 0;
    if (songaycong >= 25) tienthuong = tienluong * 0.2;
    else if (songaycong >= 22) tienthuong = tienluong * 0.1;
    else tienthuong = 0;
    int phucap = 0;
    if (chucvu == "GD") phucap = 250000;
    else if (chucvu == "PGD") phucap = 200000;
    else if (chucvu == "TP") phucap = 180000;
    else phucap = 150000;
    cout << mnv << ' ' << name << ' ' << tienluong << ' ' << tienthuong << ' ' << phucap
    << ' ' << tienluong + tienthuong + phucap;
    return 0;
}