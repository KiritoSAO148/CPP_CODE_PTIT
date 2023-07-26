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

string string_sum(string str1, string str2){
    if (str1.size() < str2.size()) swap(str1, str2);

    int m = str1.size();
    int n = str2.size();
    string ans = "";

    int carry = 0;
    for (int i = 0; i < n; i++) {
        int ds = ((str1[m - 1 - i] - '0') + (str2[n - 1 - i] - '0') + carry) % 10;
        carry = ((str1[m - 1 - i] - '0') + (str2[n - 1 - i] - '0') + carry) / 10;
        ans = char(ds + '0') + ans;
    }

    for (int i = n; i < m; i++) {
        int ds = (str1[m - 1 - i] - '0' + carry) % 10;
        carry = (str1[m - 1 - i] - '0' + carry) / 10;
        ans = char(ds + '0') + ans;
    }

    if (carry) ans = char(carry + '0') + ans;
    return ans;
}

bool checkSumStrUtil(string str, int beg, int len1, int len2){
    string s1 = str.substr(beg, len1);
    string s2 = str.substr(beg + len1, len2);
    string s3 = string_sum(s1, s2);

    int s3_len = s3.size();

    if (s3_len > str.size() - len1 - len2 - beg) return false;

    if (s3 == str.substr(beg + len1 + len2, s3_len)) {
        if (beg + len1 + len2 + s3_len == str.size()) return true;

        return checkSumStrUtil(str, beg + len1, len2, s3_len);
    }

    return false;
}

bool isSumStr(string str){
    int n = str.size();

    for (int i = 1; i < n; i++)
        for (int j = 1; i + j < n; j++)
            if (checkSumStrUtil(str, 0, i, j))
                return true;

    return false;
}

int main(){
    FileIO();
    FastIO;
    TC(){
        string s; cin >> s;
        if (isSumStr(s)) cout << "Yes\n";
        else cout << "No\n";
    }
    return 0;
}