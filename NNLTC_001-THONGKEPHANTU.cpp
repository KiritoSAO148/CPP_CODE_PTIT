#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int cnt[1001] = {0};
	vector <int> v;
	int n;
	while (cin >> n){
		v.push_back(n);
		cnt[n]++;
	}
	for (int i = 0; i < v.size(); ++i){
		if (cnt[v[i]]){
			cout << v[i] << ' ' << cnt[v[i]] << '\n';
			cnt[v[i]] = 0;
		}
	}
	return 0;
}