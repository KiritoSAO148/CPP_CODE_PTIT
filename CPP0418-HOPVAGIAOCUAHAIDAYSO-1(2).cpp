#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n,m;
		cin >> n >> m;
		int a[n],b[m];
		for (int &x : a) cin >> x;
		for (int &x : b) cin >> x;
		vector <int> hop,giao;
		int i=0,j=0;
		while (i<n && j<m){
			if (a[i] < a[j]){
				hop.push_back(a[i]);
				i++;
			}else if (a[i] > a[j]){
				hop.push_back(a[j]);
				j++;
			}else{
				giao.push_back(a[i]);
				hop.push_back(a[i]);
				i++;j++;
			}
		}
		while (i<n){
			hop.push_back(a[i++]);
		}
		while (j<m){
			hop.push_back(a[j++]);
		}
		for (int x : hop) cout << x << " ";
		cout << endl;
		for (int x : giao) cout << x << " ";
	}
	return 0;
}
