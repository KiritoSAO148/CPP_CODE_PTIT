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

struct SinhVien{
    int tt;
    string msv, ten, lop, email, doanhnghiep;
};

bool cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

int main(){
    FileIO();
    FastIO;
    int n; cin >> n;
    SinhVien a[n];
    cin.ignore();
    f0 (i, n){
        a[i].tt = i + 1;
        getline(cin, a[i].msv);
        getline(cin, a[i].ten);
        getline(cin, a[i].lop);
        getline(cin, a[i].email);
        getline(cin, a[i].doanhnghiep);
    }
    int q; cin >> q;
    cin.ignore();
    while (q--){
        string dn; getline(cin, dn);
        vector <SinhVien> v;
        f0 (i, n){
            if (a[i].doanhnghiep == dn) v.pb(a[i]);
        }
        sort(all(v), cmp);
        f0 (i, sz(v)) cout << v[i].tt << ' ' << v[i].msv << ' ' << v[i].ten << ' ' <<
        v[i].lop << ' ' << v[i].email << ' ' << v[i].doanhnghiep << '\n';
        v.clear();
    }
    return 0;
}