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


int findSubString(string s){
    int n = sz(s);
    if (n <= 1) return 1;
    int dist_count = 0;
    int visited[256] = {0};
    f0 (i, n) {
        if (!visited[s[i]]) {
            visited[s[i]] = 1;
            ++dist_count;
        }
    }
    int start = 0, start_index = -1, min_len = INT_MAX;
    int count = 0;
    int curr_count[256] = {0};
    f0 (i, n) {
        curr_count[s[i]]++;
        if (curr_count[s[i]] == 1) ++count;
        if (count == dist_count) {
            while (curr_count[s[start]] > 1) {
                if (curr_count[s[start]] > 1) curr_count[s[start]]--;
                ++start;
            }
            int len_window = i - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }
    return sz(s.substr(start_index, min_len));
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string s; cin >> s;
        cout << findSubString(s); el;
    }
    return 0;
}