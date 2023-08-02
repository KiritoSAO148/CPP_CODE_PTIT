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

ll gcd (ll a, ll b){
    if (b==0) return a;
    return gcd(b,a%b);
}

ll lcm (ll a, ll b){
    return a/gcd(a,b)*b;
}

struct PhanSo{
    ll tu, mau;
};

void inps(PhanSo x){
    cout << x.tu << '/' << x.mau;
}

void rutgon(PhanSo &x){
    ll g = gcd(x.tu, x.mau);
    x.tu /= g;
    x.mau /= g;
}

void process(PhanSo a, PhanSo b){
    ll mc = lcm(a.mau, b.mau);
    PhanSo c;
    c.tu = (mc / a.mau * a.tu) + (mc / b.mau * b.tu);
    c.mau = mc;
    c.tu *= c.tu;
    c.mau *= c.mau;
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    rutgon(c);
    rutgon(d);
    inps(c);
    cout << ' ';
    inps(d);
    cout << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        PhanSo A;
        PhanSo B;
        cin >> A.tu >> A.mau >> B.tu >> B.mau;
        process(A, B);
    }
}