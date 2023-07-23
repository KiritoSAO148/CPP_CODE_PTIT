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
    string msv; getline(cin, msv);
    string name; getline(cin, name);
    double toan, ly, hoa; cin >> toan >> ly >> hoa;
    double uutien = 0;
    string khuvuc = msv.substr(0, 3);
    if (khuvuc == "KV1") uutien = 0.5;
    else if (khuvuc == "KV2") uutien = 1.0;
    else uutien = 2.5;
    double tongdiem = toan * 2 + ly + hoa;
    cout << msv << ' ' << name << ' ';
    if (uutien - int(uutien) == 0) cout << int(uutien) << ' ';
    else cout << fixed << setprecision(1) << uutien << ' ';
    if (tongdiem - int(tongdiem) == 0) cout << int(tongdiem) << ' ';
    else cout << fixed << setprecision(1) << tongdiem << ' ';
    if (tongdiem + uutien >= 24) cout << "TRUNG TUYEN";
    else cout << "TRUOT";
    return 0;
}