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

int prime[100001];

void sang(){
    for (int i=0; i<=100000; i++)
        prime[i]=1;
    prime[0]=prime[1]=0;
    for (int i=2; i<=sqrt(100000); i++){
        if (prime[i]){
            for (int j=i*i; j<=100000; j+=i)
                prime[j]=0;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= 100000; ++i){
        if (prime[i]) ++cnt;
        prime[i] = cnt;
    }
}

int main(){
    FileIO();
    FastIO;
    sang();
    TC(){
        int l, r; cin >> l >> r;
        cout << prime[r] - prime[l] + (prime[l] != prime[l - 1]); el;
    }
    return 0;
}