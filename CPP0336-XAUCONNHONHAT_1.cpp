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

string findSubString(string str, string pat){
    int len1 = str.length();
    int len2 = pat.length();

    if (len1 < len2) return "-1";

    int hash_pat[256] = {0};
    int hash_str[256] = {0};

    for (int i = 0; i < len2; i++) hash_pat[pat[i]]++;

    int start = 0, start_index = -1, min_len = INT_MAX;
 
    int count = 0;
    for (int j = 0; j < len1; j++) {
        hash_str[str[j]]++;

        if (hash_str[str[j]] <= hash_pat[str[j]])
            count++;
        
        if (count == len2) {
            while (hash_str[str[start]] > hash_pat[str[start]] || hash_pat[str[start]] == 0) {
                if (hash_str[str[start]] > hash_pat[str[start]]) hash_str[str[start]]--;
                start++;
            }
            
            int len_window = j - start + 1;
            if (min_len > len_window) {
                min_len = len_window;
                start_index = start;
            }
        }
    }
 
    if (start_index == -1) return "-1";

    return str.substr(start_index, min_len);
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string s1, s2; cin >> s1 >> s2;
        cout << findSubString(s1, s2); el;
    }
    return 0;
}