#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while (t--){
		int n1,n2,n3;
		cin >> n1 >> n2 >> n3;
		long long a[n1],b[n2],c[n3];
		for (long long &x : a) cin >> x;
		for (long long &x : b) cin >> x;
		for (long long &x : c) cin >> x;
		int i=0,j=0,k=0;
		vector<long long>v;
		while (i<n1 && j<n2 && k<n3){
			if (a[i] == b[j] && b[j]==c[k]){
				v.push_back(a[i]);
				i++;j++;k++;
			}else if (a[i] <= b[j] && a[i] <= c[k]){
				i++;
			}else if (b[j] <= a[i] && b[j] <= c[k]){
				j++;
			}else k++;
		}
		if (v.size() == 0)
			cout << "-1" << endl;
		else{
			for (auto x : v)
				cout << x << " ";
		}
		cout << endl;
	}
	return 0;
}
