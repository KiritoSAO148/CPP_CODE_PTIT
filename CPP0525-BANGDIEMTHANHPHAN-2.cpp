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
    string msv, ten, lop;
    double d1, d2, d3;
};

void nhap(SinhVien &x){
    cin.ignore();
    getline(cin, x.msv);
    getline(cin, x.ten);
    cin >> x.lop >> x.d1 >> x.d2 >> x.d3;
}

bool cmp(SinhVien a, SinhVien b){
    return a.ten < b.ten;
}

void sap_xep(SinhVien a[], int n){
    sort(a, a + n, cmp);
}

void in_ds(SinhVien a[], int n){
    f0 (i, n) cout << i + 1 << ' ' << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' '
    << fixed << setprecision(1) << a[i].d1 << ' ' << a[i].d2 << ' ' << a[i].d3 << '\n';
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}