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
    float gpa;
};

void nhap(SinhVien a[], int n){
    f0 (i, n){
        cin.ignore();
        a[i].msv = to_string(i + 1);
        while (sz(a[i].msv) < 3) a[i].msv.insert(0, "0");
        a[i].msv = "B20DCCN" + a[i].msv;
        getline(cin, a[i].ten);
        cin >> a[i].lop >> a[i].ns >> a[i].gpa;
    }
}

void in(SinhVien a[], int n){
    f0 (i, n){
        cout << a[i].msv << ' ' << a[i].ten << ' ' << a[i].lop << ' ';
        if (a[i].ns[1] == '/') a[i].ns.insert(0, "0");
        if (a[i].ns[4] == '/') a[i].ns.insert(3, "0");
        cout << a[i].ns << ' ' << fixed << setprecision(2) << a[i].gpa << '\n';
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}