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

void sang (int l, int r){
    int prime[r-l+1];
    for (int i=0; i<=r-l+1; i++)
        prime[i]=1;
    for (int i=2; i<=sqrt(r); i++){
        for (int j=max(i*i,(l+i-1)/i*i); j<=r; j+=i)
            prime[j-l]=0;
    }
    for (int i=max(l,2); i<=r; i++){
        if (prime[i-l]) cout << i << " ";
    }
}

int main(){
    FileIO();
    FastIO;
    int a, b; cin >> a >> b;
    if (a > b) swap(a, b);
    sang(a, b);
    return 0;
}