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
    string msv, ten, lop, ns;
    double gpa;
};

void nhap(SinhVien &x){
    x.msv = "B20DCCN001";
    getline(cin, x.ten);
    cin >> x.lop >> x.ns >> x.gpa;
}

void in(SinhVien x){
    cout << x.msv << ' ' << x.ten << ' ' << x.lop << ' ';
    if (x.ns[1] == '/') x.ns.insert(0, "0");
    if (x.ns[4] == '/') x.ns.insert(3, "0");
    cout << x.ns << ' ' << fixed << setprecision(2) << x.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}