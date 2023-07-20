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

void swapRow(int a[][20], int row1, int row2, int col){
    for (int i = 0; i < col; ++i) swap(a[row1][i], a[row2][i]);
}

int findRank(int a[][20], int n, int m){
    int rank = m;
    for (int row = 0; row < rank; ++row){
        if (a[row][row]){
            for (int col = 0; col < m; ++col){
                if (col != row){
                    double mult = (double) (a[col][row] / a[row][row]);
                    for (int i = 0; i < rank; ++i){
                        a[col][i] -= mult * a[row][i];
                    }
                }
            }
        }
        else{
            bool reduce = true;
            for (int i = row + 1; i < m; ++i){
                if (a[i][row]){
                    swapRow(a, row, i, rank);
                    reduce = false;
                    break;
                }
            }
            if (reduce){
                --rank;
                for (int i = 0; i < m; ++i) a[i][row] = a[i][rank];
            }
        --row;
        }
    }
    return rank;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        int n, m; cin >> n >> m;
        int a[n][20];
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j) cin >> a[i][j];
        }
        cout << findRank(a, n, m); el;
    }
    return 0;
}