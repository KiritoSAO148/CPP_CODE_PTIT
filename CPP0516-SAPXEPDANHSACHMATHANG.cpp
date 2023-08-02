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

struct MatHang{
    int ma;
    string tenmathang, nhomhang;
    double giamua, giaban;
};

bool cmp(MatHang a, MatHang b){
    return (a.giaban - a.giamua) > (b.giaban - b.giamua);
}

int main(){
    FileIO();
    FastIO;
    int n; cin >> n;
    vector <MatHang> a(n);
    f0 (i, n){
        cin.ignore();
        a[i].ma = i + 1;
        getline(cin, a[i].tenmathang);
        getline(cin, a[i].nhomhang);
        cin >> a[i].giamua >> a[i].giaban;
    }
    sort(all(a), cmp);
    f0 (i, n) cout << a[i].ma << ' ' << a[i].tenmathang << ' ' << a[i].nhomhang << ' ' 
    << fixed << setprecision(2) << a[i].giaban - a[i].giamua << '\n';
    return 0;
}