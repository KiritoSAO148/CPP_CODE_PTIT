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

int cnt = 0;

struct NhanVien{
    string mnv, ten, gt, ns, dc, mst, hd;
};

void nhap(NhanVien &x){
    cin.ignore();
    ++cnt;
    x.mnv = to_string(cnt);
    while (sz(x.mnv) < 5) x.mnv = "0" + x.mnv;
    getline(cin, x.ten);
    getline(cin, x.gt);
    getline(cin, x.ns);
    getline(cin, x.dc);
    cin >> x.mst >> x.hd;
}

void inds(NhanVien a[], int n){
    f0 (i, n) cout << a[i].mnv << ' ' << a[i].ten << ' ' << a[i].gt << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << a[i].mst << ' ' << a[i].hd << '\n';
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}