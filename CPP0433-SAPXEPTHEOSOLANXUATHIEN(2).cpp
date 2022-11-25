#include <bits/stdc++.h>
using namespace std;

map <int,int> mp;
int a[100001];
int n;

bool cmp (int a,int b){
	if (mp[a] != mp[b])
		return mp[a] > mp[b];
	return a<b;
}

int main(){
	int t;
	cin >> t;
	while (t--){
		cin >> n;
		for (int i=0; i<n; i++){
			cin >> a[i];
			mp[a[i]]++;
		}
		sort (a,a+n,cmp);
		for (int i=0; i<n; i++){
			cout << a[i] << " ";
		}
		cout << endl;
		mp.clear();
	}
	return 0;
}
