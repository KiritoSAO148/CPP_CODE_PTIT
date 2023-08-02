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

struct Person{
    string ten, ns;
};

bool cmp(Person a, Person b){
    string date1 = a.ns, date2 = b.ns;
    int day1 = stoi(date1.substr(0, 2)), month1 = stoi(date1.substr(3, 5)), year1 = stoi(date1.substr(6));
    int day2 = stoi(date2.substr(0, 2)), month2 = stoi(date2.substr(3, 5)), year2 = stoi(date2.substr(6));
    if (year1 != year2) return year1 < year2;
    if (month1 != month2) return month1 < month2;
    return day1 < day2;
}

int main(){
    FileIO();
    FastIO;
    int n; cin >> n;
    Person a[n];
    f0 (i, n) cin >> a[i].ten >> a[i].ns;
    sort(a, a + n, cmp);
    cout << a[n - 1].ten << '\n' << a[0].ten;
    return 0;
}