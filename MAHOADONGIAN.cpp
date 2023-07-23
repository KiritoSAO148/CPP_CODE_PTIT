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

vector <char> upperCase = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
vector <char> lowerCase = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int findIdxUpper(char c){
    f0 (i, 26){
        if (c == upperCase[i]) return i;
    }
}

int findIdxLower(char c){
    f0 (i, 26){
        if (c == lowerCase[i]) return i;
    }
}

int main(){
    FileIO();
    FastIO;
    string s; getline(cin, s);
    string ans = "";
    f0 (i, sz(s)){
    	char c = s[i];
        if (c == 'Z'){
            c = 'B';
            ans += c;
            continue;
        }
        else if (c == 'Y'){
            c = 'A';
            ans += c;
            continue;
        }
        else if (c == 'a'){
            c = 'y';
            ans += c;
            continue;
        }
        else if (c == 'b'){
            c = 'z';
            ans += c;
            continue;
        }
        else if (isupper(c)) c = (c - 'A' + 2) % 26 + 'A';
        else if (islower(c)) c = (c - 'a' - 2) % 26 + 'a';
        ans += c;
    }
    cout << ans;
    return 0;
}