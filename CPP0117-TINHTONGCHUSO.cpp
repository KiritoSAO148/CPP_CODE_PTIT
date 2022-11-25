#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define sz(a) int((a).size())
#define f0(i,n) for (int i=0; i<n; i++)
#define f1(i,n) for (int i=1; i<=n; i++)
#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define maxn

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;

// int solve (int n){
//     if (n<10) return n;
//     return solve(n%10+solve(n/10));
// }

int solve (int n){
    while (n>9){
        int s=0;
        while (n){
            s+=n%10;
            n/=10;
        }
        n=s;
    }
    return n;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    FastIO;
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        cout << solve(n) << "\n";
    }
    return 0;
}