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

string multiply(string a, string b){
    int n = sz(a);
    int m = sz(b);
    int len = n + m - 1;
    int nho = 0;
    string ans = "";
    for (int i = len; i >= 0; --i){
        int res = 0;
        for (int j = n - 1; j >= 0; --j)
            if(i - j <= m && i - j >= 1){
                int a1 = a[j] - '0';
                int b1 = b[i - j - 1] - '0';
                res += a1 * b1;
            }
            res += nho;
            nho = res / 10;
            ans = (char)(res % 10 + '0') + ans;
    }
    while(sz(ans) > 1 && ans[0] == '0') ans.erase(0, 1);
    return ans;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string a, b; cin >> a >> b;
        string ans = "";
        if ((a[0] == '-' && b[0] != '-') || (a[0] != '-' && b[0] == '-')){
            if (a[0] == '-') a.erase(0, 1);
            if (b[0] == '-') b.erase(0, 1);
            ans = multiply(a, b);
            ans = "-" + ans;
        }else{
            if (a[0] == '-') a.erase(0, 1);
            if (b[0] == '-') b.erase(0, 1);
            ans = multiply(a, b);
        }
        cout << ans; el;
    }
    return 0;
}