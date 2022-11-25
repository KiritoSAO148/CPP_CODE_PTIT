#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
typedef long long ll;
const int MOD = (int) 1e9+7;

int cmp (pair<int,int>a, pair<int,int> b){
	if (a.second==b.second) return a.first<b.first;
	return a.second>b.second;
}

int main(){
	#ifndef ONLINE_JUDGE
  	freopen("input.txt", "r", stdin);
  	freopen("output.txt", "w", stdout);
  	#endif
	FastIO;
	int n,m; cin >> n >> m;
	int cnt[m+1]={0};
	for (int i=0; i<n; i++){
		int x; cin >> x;
		cnt[x]++;
	}
	pair <int,int> p[m+1];
	for (int i=1; i<=m; i++){
		p[i].first=i;
		p[i].second=cnt[i];
	}
	sort(p+1,p+m+1,cmp);
	vector <pair<int,int>> v;
	for (int i=1; i<=m; i++) v.push_back(p[i]);
	//for (auto it : v) cout << it.first << ' ' << it.second << "\n";
	set <int> s;
	for (auto it : v) s.insert(it.second);
	if (s.size()==1) cout << "NONE";
	else cout << v[1].first;
	return 0;
}